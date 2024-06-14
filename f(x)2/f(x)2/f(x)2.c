#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 12;
//	int b = (a /= a + a);
//	printf("%d", b);
//	return 0;
//}
//int main(void)
//{
//    int a[2][3] = { 1,3,5,7,9,11 };
//    int m, * ptr;
//    ptr = &a[0][0];
//    m = (*ptr) * (*(ptr + 2)) * (*(ptr + 4));
//    printf("%d\n", m);
//    return 0;
//}

//int main()
//{
//	float a = 0.0;
//	scanf("%f", a);
//	printf("%f", a);
//	return 0;
//}
//int searchInsert(int* nums, int numsSize, int target)
//{
//    int low = 0;
//    int high = numsSize - 1;
//    int temp;
//    while (low <= high)
//    {
//        temp = low + (high - low) / 2;
//        if (nums[temp] == target)
//            return temp;
//        else if (nums[temp] > target)
//            high = temp - 1;
//        else if (nums[temp] < target)
//            low = temp + 1;
//    }
//    return low;
//}

#include <stdlib.h>
//int main()
//{
//    int nums[] = { 0 };
//    int i = 0;
//    int n = 0;
//    for (i = 0;; i++)
//    {
//        scanf("%d", nums[i]);
//        if (getchar() == '\n');
//        {
//            break;
//        }
//    }
//    do
//    {
//        scanf("%d", &nums[i]);
//        i++;
//    } while(getchat()!='\n');
//    for (n = 0; n <= i; n++)
//    {
//        printf("%d ", nums[n]);
//    }
//    return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	//while (i<sz)
//	//{
//	//	printf("%d ", arr[i]);
//	//	i++;
//	//}
//	//putchar('\n');
//	for (i = 0; i < sz; i++);
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#include <string.h>
//void funa (int *x,int *y)
//{ 
//	int p;
//	p = *x;
//	*x = *y;
//	*y = p;
//}

//int main()
//{
//	//int k = 2;
//	//int a = 3;
//	////int b = a*k++;
//	////printf("%d\n", b);
//	////printf("%d\n", a * k++);
//	//float b = 2.9;
//	//printf("%d", (int)b);
//
//	//char arr[] = "\\\"ABC\"\\";
//	//int n = strlen(arr);
//	//int m = sizeof(arr);
//	//printf("%d\n", n);
//	//printf("%d\n", m);
//	//printf("%s\n", arr);
//
//	//char* a[2] = { "abcd","ABCD" };
//	//return 0;
//
//	//int x = 1;
//	//int y = 2;
//	//funa(&x, &y);
//	//printf("%d,%d", x, y);
//	//return 0;
//
//	//int x = 0;
//	//float y = 0;
//	//char z;
//	////scanf("x=%d,y=%f", &x, &y);
//	//scanf("%d %c", &x, &z);
//	//printf("%d,%c", x, z);
//	
//	//int x, y;
//	//scanf("%2d%*2d%ld", &x, &y);
//	//printf("%d\n", x + y);
//	
//	//char s[] = "a book! ";
//	//printf("%.4s", s);
//
//	//int a = 1;
//	//int b = 2;
//	//int c = 0;
//	//c += a + b;
//	//printf("%d", c);
//
//	//int a = 3;
//	//int b = 7;
//	//int c = 7;
//	//int* p1, * p2, * p3;
//	//p1 = &a;
//	//p2 = &b;
//	//p3 = &c;
//	//sun(p1, p2, p3);
//	//printf("%d %d %d", a, b, c);
//	//return 0;
//
//	//char ch = ' ';
//	//printf("%c", ch);
//	//printf("%d", ch);
//	//return 0;
//
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	if (i < 6)
//	//		continue;
//	//}
//	//printf("%d", i);
//	//return 0;
//
//	//int arr[] = { 0,1,2,3,4,5 };
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(int[20]));
//	//printf("%d\n", strlen(arr));
//	//return 0;
//}

//void Exg(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int x = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = x;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Exg(arr1, arr2, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//void Order(int num[],int i)
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	for (a = 0; a < i - 1; a++)
//	{
//		for (b = a + 1; b < i; b++)
//		{
//			if (num[a] > num[b])
//			{
//				tmp = num[a];
//				num[a] = num[b];
//				num[b] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int num[10] = { 0 };
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	printf("请输入你要输入的数的个数:>");
//	scanf("%d", &i);
//	printf("请输入数：\n");
//	for (a = 0; a < i; a++)
//	{
//		scanf("%d", &num[a]);
//	}
//	Order(num,i);
//	printf("请输入你想查找的数:>");
//	scanf("%d", &b);
//	for (a = 0; a < i; a++)
//	{
//		if (num[a] == b)
//		{
//			printf("你想找的数排第 %d 位", a + 1);
//			break;
//		}
//	}
//	return 0;
//}

//void F(int* a)
//{
//	*a = 10;
//}
//int main()
//{
//	int a = 0;
//	F(&a);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	float a = 1;
//	printf("%5.2f", a);
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		else if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//	}
//	return 0;
//}

#include <ctype.h>

//int main()
//{
//    int i = 0;
//    char str[] = "Test String.\n";
//    char c;
//    while (str[i])
//    {
//        c = str[i];
//        if (islower(c)) c = toupper(c);
//        putchar(c);
//        i++;
//    }
//    return 0;
//}

//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (isupper(ch))
//			printf("%c\n", ch + 32);
//		else if (islower(ch))
//			printf("%c\n", ch - 32);
//	}
//	return 0;
//}

//void ORDER(int arr[10])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//void BIN_SCARCH(int arr[10])
//{
//	printf("找啥\n");
//	int n = 0;
//	scanf("%d", &n);
//	int left = 0;
//	int right = 10;
//	while (1)
//	{
//		int mid = left / 2 + right / 2;
//		if (arr[mid] < n)
//			left = mid + 1;
//		else if (arr[mid > n])
//			right = mid - 1;
//		else
//		{
//			printf("在第 %d 位", (mid + 1));
//			break;
//		}
//		if (left == right)
//		{
//			printf("没有");
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	ORDER(arr);
//	BIN_SCARCH(arr);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j = 0;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	scanf("%d", &i);
//	int left = 0;
//	int right = 9;
//	while (1)
//	{
//		int mid = left / 2 + right / 2;
//		if (arr[mid] < i)
//			left = mid + 1;
//		else if (arr[mid] > i)
//			right = mid - 1;
//		else
//		{
//			printf("arr[%d]\n", mid);
//			break;
//		}
//		if (left == right)
//		{
//			printf("404 NOT FOUND!\n");
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//}

//void test(int arr[10])
//{
//	;
//}
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char arr[] = "abcdef";
//	test(arr);
//	return 0;
//}

//void test3()
//{
//	printf("666");
//}
//void test2()
//{
//	test3();
//}
//void test1()
//{
//	test2();
//}
//int main()
//{
//	test1();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%u\n", &i);
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//void my_strcopy(char arr1[], char arr2[])
//{
//	int i = 0;
//	for (i = 0; arr2[i] != '\0'; i++)
//	{
//		arr1[i] = arr2[i];
//	}
//	arr1[i] = arr2[i];
//}
//优化如下
#include <assert.h>
//void my_strcopy(char* dest, const char* src)
//{
//	//断言
//	assert(src != NULL);
//	assert(dest != NULL);
//
//	while(*dest++ = *src++)
//	{
//		;
//	}
//}
//再优化👇
//返回形式为char*，使其能实现链式访问
//返回值为目标参数的首地址
//char* my_strcopy(char* dest, const char* src)
//{
//	//保存目标参数的首地址
//	char* ret = dest;
//	//断言
//	assert(src != NULL);
//	assert(dest != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello my love";
//	char* p = NULL;
//	//my_strcopy(arr1, arr1);
//	printf("%s\n", my_strcopy(arr1, arr2));
//	strcpy(arr1, "hello");
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a == b && b == c)
//                printf("Equilateral triangle!\n");
//            else if ((a == b) || (b == c) || (a == c))
//
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//
//    }
//    return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#include <math.h>
//水仙花数也被称为超完全数字不变数、自恋数、自幂数、阿姆斯壮数或阿姆斯特朗。
// 水仙花数是指一个 3 位数，它的每个数位上的数字的 3 次幂之和等于它本身。例如：1^3 + 5^3+ 3^3 = 153。
//n位数，各个位数的n次方之和，等于它本身。打印0~10000中的所有水仙花数
//int main()
//{
//	int n = 0;
//
//	int i = 0;
//	int j = 0;
//	//确定10^i以内的数
//	scanf("%d", &i);
//	//确定位数
//	for (j = 0; j < i; j++)
//	{
//		//生成此位数的所有数
//		for (n = pow(10, j); n < pow(10, j + 1); n++)
//		{
//			int tmp = n;
//			//判断水仙花数
//			int k = 0;
//			int sum = 0;
//			for (k = j + 1; k > 0; k--)//99
//			{
//				sum += pow(tmp % 10, j + 1);
//				tmp /= 10;
//			}
//			if (sum == n)
//				printf("%d ", n);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	//判断i是否是“水仙花数”
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		//1、判断i的位数
//		//默认最少为1
//		int n = 1;
//		int tmp = i;
//		while (tmp > 9)
//		{
//			tmp /= 10;
//			n++;
//		}
//		tmp = i;
//		//2、得到i的每一位
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3、判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

int main()
{
	int line = 0;
	printf("输入边长大小：");
	scanf("%d", &line);
	int i = 1;
	int j = 1;
	for (i = 1; i <= (line+1)/2; i++)
	{
		for (j = 1; j <= line; j++)
		{
			//i+j >= (line+1)/2+1 -->'*' //i+j == 8,j == 8-i,14-(8-i)-->6+i
			//j <= 6+i
			if (i + j < (line + 1) / 2 + 1)
				printf("%c", ' ');
			else if (i + j >= (line + 1) / 2 + 1 && j <= (line-1)/2 + i)
				printf("%c", '*');
			else
				printf("%c", ' ');
		}
		printf("\n");
	}
	for ( ; i <= line; i++)
	{
		for (j = line; j >= 0; j--)
		{
			//i+j <= 20 -->'*'
			//j >= i-6
			if (i + j > line+(line+1)/2)
				printf("%c", ' ');
			else if (j >= i - (line-1)/2 && i + j <= line + (line + 1) / 2)
				printf("%c", '*');
			else
				printf("%c", ' ');
		}
		printf("\n");
	}
	return 0;
}