#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main()
{
	int* p = (int*)malloc(40);
	while (1)
	{
		p = realloc(p, 40);
	}
	return 0;
}