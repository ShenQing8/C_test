#include "head.h"
//int main()
//{
//	int a = 10;
//	//&a;//取地址操作符
//	int* p = &a;//编号-->地址-->指针
//	printf("%p\n", p);
//	*p = 20;// * 解引用符，通过地址找到变量
//	printf("%d\n", a);
//
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(double*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(long*));
//
//
//	
//	//char ch = '6';
//	//char* u = &ch;
//	//printf("%p\n", u);
//	return 0;
//}

//指针相减：（绝对值）得到两指针之间的元素个数
//注：指向同一块区域的两个指针才能相减

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//1.循环
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2.递归
//int my_strlen(char* str)
//{
//	int count = 0;
//	if (*str != '\0')
//	{
//		count = my_strlen(str + 1);
//		count++;
//	}
//	return count;
//}
//3.指针相减
//int my_strlen(char* str)
//{
//	printf("%c\n", *str);
//	printf("%u\n", str);
//	char* start = str;
//	printf("%c\n", *start);
//	printf("%u\n", start);
//
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//int main()
//{
//	//求字符串长度
//	//int len = strlen("abcdef");
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

//二级指针

//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	//int** ppa = &pa;
//	//**ppa = 20;
//	int* pp = pa;
//	*pp = 20;
//	printf("%d\n", a);
//	return 0;
//}

//指针数组:int* p[100]={arr1,arr2,*a}
//数组指针:int (*p)[100]={int类型的变量}

//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//
//	//int* pll[10] = { pa,pb,pc };
//
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("%d ", *pll[i]);
//	//}
//
//	int arr1[4] = { 1,2,3,5 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		//for (j = 0; j < 4; j++)
//		//{
//		//	printf("%d ", parr[i][j]);
//		//}
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//进阶

//int main()
//{
//	char* p = "abcdef";
//	printf("%s\n", p);
//	return 0;
//}

//数组名一般表示首元素地址
//有两个特殊情况,表示整个数组：
//1、sizeof(数组名)
//2、&数组名

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr + 1);
//	printf("%p\n\n", &arr + 1);
//
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int (*p)[10] = { &arr };
//	int* p = &arr;
//	//printf("%d\n", *p[0]);
//	return 0;
//}

//函数指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//void aul(int (*a)(int,int))
//{
//	int k = a(1, 2);
//	int h = Add(2, 3);
//	printf("%d %d\n", k, h);
//}
//int main()
//{
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int (*p)(int, int) = Add;
//	int ret = (*p)(3, 5);
//	ret = p(3, 5);
//	ret = Add(3, 5);
//	printf("%d\n", ret);
//
//	aul(Add);
//	return 0;
//}

//冒泡排序，自写程序实现qsort

struct stu
{
	char name[20];
	int age;
};
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	//趟数
//    // 标记，如果一趟后未交换，则直接跳出循环
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//比较
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//交换(升序)
//			if (*(arr + j) > *(arr + j + 1))
//			{
//				int tmp = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1) = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
void Swap(char* x, char* y, size_t size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *x;
		*x = *y;
		*y = tmp;
		x++;
		y++;
	}
}
void bubble_sort(void* arr, size_t num, size_t size, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	int j = 0;
	//趟数
	// 标记，如果一趟后未交换，则直接跳出循环
	int flag = 1;
	for (i = 0; i < num - 1; i++)
	{
		//比较
		for (j = 0; j < num - 1 - i; j++)
		{
			//交换(升序)
			if (cmp((char*)arr + size * j, (char*)arr + size * (j + 1)) > 0)
			{
				Swap((char*)arr + size * j, (char*)arr + size * (j + 1), size);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int num_cmp(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
int str_cmp(const void* e1, const void* e2)
{
	//strcpm的返回值恰好是 >0,<0,=0
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

//void test1()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//}
//void test2()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), num_cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test3()
//{
//	struct stu peo[] = { {"zhangsan",18},{"lisi",20},{"wangwu",16} };
//	int sz = sizeof(peo) / sizeof(peo[0]);
//	qsort(peo, sz, sizeof(peo[0]), str_cmp);
////}
void test4()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz,sizeof(arr[0]),num_cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test5()
{
	struct stu peo[] = { {"zhangsan",18},{"lisi",20},{"wangwu",16} };
	int sz = sizeof(peo) / sizeof(peo[0]);
	bubble_sort(peo, sz, sizeof(peo[0]), str_cmp);
}
int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	test5();
	return 0;
}