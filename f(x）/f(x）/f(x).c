#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�����Ķ��������
//������Ƕ�ף�һ�������п���ʹ����һ������
//��ʽ���ʣ�һ�������ķ���ֵ����һ�������Ĳ���   printf("%d",printf("%d",printf("%d",43)));
//                                    �������Ϊ��4321
//�����ݹ�
//�ݹ�͵���

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
//	//����
//	scanf("%d %d", &n1, &n2);
//	//���
//	int sum = Add(n1,n2);
//	//��ӡ
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
//		//�ж��Ƿ�Ϊ����������2~i-1����
//		int flag = 0;
//		int n = 2;
//		for (n = 2; n <= i - 1; n++)
//		{
//			if (i % n == 0)//�����������
//			{
//				flag = 1;
//				break;
//			}
//		}
//		//���������ӡ
//		if (flag == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//�ж��Ƿ�Ϊ����
#include <math.h>

//int is_prime(int n)
//{
//	//�ж��Ƿ�Ϊ����������2~i-1����
//	int m = 0;
//	for (m = 2; m <= sqrt(n); m++)
//	{
//		if (n % m == 0) //�����������
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

//�ж��Ƿ�Ϊ����

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

//ʵ��һ��������������ö��ֲ���

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
//	//�ҵ��ˣ������±�
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d", ret);
//	}
//	//�Ҳ���������-1
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

//%d�з�������
//%u�޷�������

//�����ݹ飺ÿһ�ε��ú�����Ҫ��ջ������һ��ռ䣬������ݹ��ˣ���ôջ���������������
//�ݹ������������
//1��Ҫ��������������������ʱ���ݹ���ǲ��ټ���
//2�����ŵݹ�ؽ��У�Խ��Խ�ӽ��������
//
//�����������������ȴ��Ϊ�ݹ�̫�������ջ��������������������
//1�����ݹ��Ϊ�ǵݹ飨�������ȵȣ�
//2����static����̬�������滻unstatic���Ǿ�̬������

//�����������Ͷ���

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


//�����ݹ�
#include <string.h>
//��������ʱ����
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

//������������ʱ
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

//�ݹ��ʵ��
//int fac(n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//������ʵ��
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

//���n��쳲�������

//�ݹ鲻���ʣ�������̫��
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

//���������n��쳲�������   ��󵽵�161  9217463444206948445

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

//static���ξֲ�����
//void text()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}

//static����ȫ�ֱ���
//extern int tsyear;

//static���κ���
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


	//�Ĵ�������,register�����齫�������ڼĴ���������ٶȸ��죩
	//�ٶȣ��Ĵ���>���ٻ���>�ڴ�>Ӳ��
	//register int a = 10;

//	return 0;
//}

extern x;
int main()
{
	printf("%d", x);
	return 0; 
}