#include<stdio.h>
#include <stdio.h>

//int arr[10] = {11,12,13,14,15,16,17,18,19,20};
//char a[] = "ABC\0DEF";
//char b[] = {'A','B','C','D','\0','E','F'};
////float arr3[] = {2.1,3.6,6.6,8.8};
//int main()
//{
//	//printf("%d\n", arr[5]);
//	//printf("%d\n", sizeof arr / sizeof arr[0]);
//	//printf("%d\n", sizeof(arr));
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(b));
//	printf("%d\n", strlen(a));
//	printf("%d\n", strlen(b));
//
//
//	//int i = 0;
//	//while (i < 10)
//	//{
//	//	printf("%d ", arr[i]);
//	//	//printf("%d\n", arr[i]);
//	//	//i++;
//	//	i = i + 1;
//	//}
//	return 0;
//}

//一维数组：
//数组名可以表示首元素地址
//但两种情况除外：
//1、sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2、&数组名，这里的数组名表示整个数组，取整个数组的地址
//
//二维数组：
//二维数组可以看作一维数组的数组
//因此，二维数组的数组名可以表示第一行的地址
//两组特殊情况与一维数组相同
//其余情况类推（eg：arr+1表示第二行的地址……）

//int main()
//{
//	int arr1[10];
//	printf("%p\n", arr1);     //表示首元素地址
//	printf("%p\n", arr1+1);   //与上面相差4个字节
//	printf("------------------------\n");
//	printf("%p\n", &arr1[0]);     //表示首元素地址
//	printf("%p\n", &arr1[0]+1);   //与上面相差4个字节
//	printf("------------------------\n");
//	printf("%p\n", &arr1);       //表示整个数组的地址
//	printf("%p\n", &arr1+1);     //与上面相差40个字节
//
//	int arr2[3][4];
//	printf("%p\n", arr2);
//	printf("%p\n", arr2 + 1);
//	printf("------------------------\n");
//	printf("%p\n", &arr2[0]);
//	printf("%p\n", &arr2[0] + 1);
//	printf("------------------------\n");
//	printf("%p\n", &arr2[0][0]);
//	printf("%p\n", &arr2[0][0] + 1);
//	printf("------------------------\n");
//	printf("%p\n", &arr2);
//	printf("%p\n", &arr2 + 1);
//	return 0;
//}


//冒泡排序

//数组传参的两种形式
//1、形参是数组的形式
//2、指针

void Swap(int* p1, int* p2)
{
	int tep = 0;
	tep = *p1;
	*p1 = *p2;
	*p2 = tep;
}
//形参是数组的形式
//void bubble_sort(int arr[],int sz)
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//确定比较次数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//进行比较
//			if (arr[j] > arr[j + 1])
//				Swap(&arr[j], &arr[j + 1]);
//		}
//	}
//}
//形参是指针形式
void bubble_sort(int* arr, int sz)
{
	//确定趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//确定比较次数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//进行比较
			if (arr[j] > arr[j + 1])
				Swap(&arr[j], &arr[j + 1]);
		}
	}
}
int num_cmp(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}
int main()
{
	int arr[] = { 1,4,94,56,2,6,77,332,7,7,15 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//将数组内数据按升序重排
	/*bubble_sort(arr,sz);*/
	qsort(arr, sz, sizeof(arr[0]), num_cmp);
	//打印数据
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

