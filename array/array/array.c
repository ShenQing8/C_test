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

//һά���飺
//���������Ա�ʾ��Ԫ�ص�ַ
//������������⣺
//1��sizeof(������)���������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2��&���������������������ʾ�������飬ȡ��������ĵ�ַ
//
//��ά���飺
//��ά������Կ���һά���������
//��ˣ���ά��������������Ա�ʾ��һ�еĵ�ַ
//�������������һά������ͬ
//����������ƣ�eg��arr+1��ʾ�ڶ��еĵ�ַ������

//int main()
//{
//	int arr1[10];
//	printf("%p\n", arr1);     //��ʾ��Ԫ�ص�ַ
//	printf("%p\n", arr1+1);   //���������4���ֽ�
//	printf("------------------------\n");
//	printf("%p\n", &arr1[0]);     //��ʾ��Ԫ�ص�ַ
//	printf("%p\n", &arr1[0]+1);   //���������4���ֽ�
//	printf("------------------------\n");
//	printf("%p\n", &arr1);       //��ʾ��������ĵ�ַ
//	printf("%p\n", &arr1+1);     //���������40���ֽ�
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


//ð������

//���鴫�ε�������ʽ
//1���β����������ʽ
//2��ָ��

void Swap(int* p1, int* p2)
{
	int tep = 0;
	tep = *p1;
	*p1 = *p2;
	*p2 = tep;
}
//�β����������ʽ
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ȷ���Ƚϴ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//���бȽ�
//			if (arr[j] > arr[j + 1])
//				Swap(&arr[j], &arr[j + 1]);
//		}
//	}
//}
//�β���ָ����ʽ
void bubble_sort(int* arr, int sz)
{
	//ȷ������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//ȷ���Ƚϴ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//���бȽ�
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
	//�����������ݰ���������
	/*bubble_sort(arr,sz);*/
	qsort(arr, sz, sizeof(arr[0]), num_cmp);
	//��ӡ����
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

