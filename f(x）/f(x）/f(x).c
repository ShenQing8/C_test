#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//函数的定义和声明
//函数的嵌套：一个函数中可以使用另一个函数
//链式访问：一个函数的返回值做另一个函数的参数   printf("%d",printf("%d",printf("%d",43)));
//                                    上述结果为：4321
//函数递归
//递归和迭代

//int Add(int x, int y)
//{
//	//int z = 0;
//	//z = x + y;
//	//return z;
//	return(x + y);
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d", &n1, &n2);
//	//求和
//	int sum = Add(n1,n2);
//	//打印
//	printf("%d\n",sum);
//	int t1 = 100;
//	int t2 = 500;
//	int sum2 =Add(t1,t2);
//	printf("sum2=%d\n", sum2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断是否为素数，生成2~i-1的数
//		int flag = 0;
//		int n = 2;
//		for (n = 2; n <= i - 1; n++)
//		{
//			if (i % n == 0)//如果不是素数
//			{
//				flag = 1;
//				break;
//			}
//		}
//		//是素数则打印
//		if (flag == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//判断是否为素数
#include <math.h>

//int is_prime(int n)
//{
//	//判断是否为素数，生成2~i-1的数
//	int m = 0;
//	for (m = 2; m <= sqrt(n); m++)
//	{
//		if (n % m == 0) //如果不是素数
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//判断是否为闰年

//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//实现一个整型有序数组得二分查找

//int binar_search(int arr0[], int s,int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = left+(right-left)/2;
//		if (arr0[mid] < s)
//		{
//			left = mid + 1;
//		}
//		else if (arr0[mid] > s)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binar_search(arr, k, sz);
//
//	//找到了，返回下标
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d", ret);
//	}
//	//找不到，返回-1
//	return 0;
//}


//void Add(int *n)
//{
//	(*n)+=1;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n",num );	
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	printf("%d\n",97);
//	int i=printf("%d", printf("%d", printf("%d", 43)));
//	printf("\n%d", i);
//	return 0;
//}

//%d有符号整型
//%u无符号整型

//函数递归：每一次调用函数都要在栈区申请一块空间，如果死递归了，那么栈溢出，程序不能运行
//递归的两个条件：
//1、要有限制条件，满足条件时，递归便那不再继续
//2、随着递归地进行，越来越接近这个条件
//
//如果满足以上条件，却因为递归太深而导致栈溢出，则考虑其他解决方法
//1、将递归改为非递归（迭代，等等）
//2、用static（静态）对象替换unstatic（非静态）对象

//函数的声明和定义

//#include "print.h"
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	
//	return 0;
//}


//函数递归
#include <string.h>
//允许创建临时变量
//int slen(char *str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//不允许创建变量时
//int slen(char* str)
//{
//	if (*str != '\0')
//		return 1 + slen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "123";
//	int len = slen(arr);
//	printf("%d", len);
//	return 0;
//}

//递归的实现
//int fac(n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//迭代的实现
//int fac(int n)
//{
//	int m = 0;
//	int a = 1;
//	for (m = 0; m < n; n--)
//	{
//		a = a*n;
//	}
//	return a;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d", ret);
//	return 0;
//}

//求第n个斐波那契数

//递归不合适，计算量太大
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//迭代计算第n个斐波那契数   最大到第161  9217463444206948445

//long long Fib(int n)
//{
//	long long x = 0;
//	long long y = 1;
//	int m = n / 2;
//	if (n % 2 != 0)
//	{
//		while (m > 0)
//		{
//			x = x + y;
//			y = x + y;
//			m--;
//		}
//		return y;
//	}
//	else
//	{
//		while (m > 0)
//		{
//			x = x + y;
//			y = x + y;
//			m--;
//		}
//		return x;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long ret = Fib(n);
//	printf("%lld", ret);
//	return 0;
//}

//void excg(int *p1,int *p2)
//{
//	int p;
//	p = *p1;
//	*p1 = *p2;
//	*p2 = p;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i=0)
//			printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while(c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}

//typedef unsigned int unint;

//static修饰局部变量
//void text()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}

//static修饰全局变量
//extern int tsyear;

//static修饰函数
//extern int Add(int x, int y);
//int main()
//{
	//unsigned int a = 10;
	//unint b = 12;
	//double c = sizeof(a);
	//double d = sizeof(b);
	//printf("%f %f",c,d);


	//int i = 0;
	//while (i < 10)
	//{
	//	text();
	//	i++;
	//}
	//printf("\n%d\n", i);
	//while (i < 11)
	//{
	//	text();
	//	
	//	i++;
	//}


	//printf("%d", tsyear);


	//int a = 10;
	//int b = 20;
	//int c = Add(a, b);
	//printf("%d", c);


	//寄存器变量,register：建议将变量放在寄存器里（访问速度更快）
	//速度：寄存器>高速缓存>内存>硬盘
	//register int a = 10;

//	return 0;
//}

extern x;
int main()
{
	printf("%d", x);
	return 0; 
}