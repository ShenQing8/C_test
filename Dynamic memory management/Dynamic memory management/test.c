#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//
//�ڴ�ɴ��·�Ϊ��ջ������������̬��
//������Ķ�������һ��
//ջ�����ֲ���������ʽ����
//������malloc,calloc,realoc,free
//��̬����ȫ�ֱ���
//

//malloc

//int main()
//{
//	int* p = (int*)malloc(20);
//	//malloc���ٳɹ����򷵻�void*���͵�ָ��
//	//�������ʧ�ܣ��򷵻�NULL
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("p: 0x%p   %d\n", p + i, *(p + i));
//	}
//	free(p);
//	printf("0x%p   %d\n", p, *p);
//	//�ɼ���freeֻ���������ռ��ŵ�ֵ������������p
//    //�����γ���p���Ұָ��
//	//��ȫ��д���ǣ�free֮���ٽ�p = NULL
//	p = NULL;
//	printf("0x%p", p);
//
//	//û��free
//	//���������ڴ�Ͳ�����
//	//�������˳�ʱ���ڴ���Զ�����
//	return 0;
//}

//calloc

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//malloc��calloc��������ǣ�calloc���ʼ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc

//int main()
//{
//	//����
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//����
//	int* ptr = (int*)realloc(p, 8000);
//	//realloc���ٵĿռ䲻��ֱ�Ӹ���p
//	//���ܿ��ٿռ�ʧ�ܣ��򷵻ؿ�ָ�룬�㽫p��Ϊ��NULL
//
//	//realloc���ݿռ�ʱ���������
//	//1��ԭ�ռ����Ŀռ乻����ֱ������
//	//2����ԭ�ռ����Ŀռ䱻ʹ���ˣ������������ڴ���������һ�鹻��Ŀռ�
//	//�������ݿ�����������ԭ�ռ��ͷ�
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
typedef struct ch
{
	char  arr[20];
}ch;
int main()
{
	//int* p = (int*)malloc(40);
	//char* p = (char*)calloc(2,20);
	ch a;
	ch* p = (ch*)calloc(1, sizeof(ch));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	
	//while (1)
	//{
	//	p = realloc(p, 40);
	//}
	
	//int* tmp = (int*)realloc(p, 0 + 10 * sizeof(int));
	//char* tmp = (char*)realloc(p, 40);
	ch* tmp = (ch*)realloc(p, 2 * sizeof(ch));
	if (tmp == NULL)
	{
		return 1;
	}
	else
	{
		p = tmp;
		tmp = NULL;
	}
	return 0;
}

//int main()
//{
//	int* p = (int*)malloc(40);
//	printf("%d\n", sizeof(*p));
//	//������
//	//free(p+9);
//	
//	//����
//	int* tmp = (int*)realloc(p, 36);
//
//	printf("%d\n", sizeof(*p));
//	return 0;
//}