#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//typedef struct peo
//{
//	char name[20];
//	char sex[5];
//	char tel[12];
//	int height;
//}peo;
//
////�ṹ����չ
//struct peop
//{
//	peo p;
//	int weight;
//	float iq;
//};
//void aprint(peo sp)
//{
//	printf("%s %s %s %d\n", sp.name, sp.sex, sp.tel, sp.height);
//}
//void bprint(peo* pp)
//{
//	printf("%s %s %s %d\n", pp->name, pp->sex, pp->tel, pp->height);
//}
//int main()
//{
//	struct peo p = { "����" ,"��","15264868888",182 };
//	struct peop g = { {"��˹","Ů","16699896666",165},49,200.0 };
//	//�ṹ�崫��
//	aprint(p);
//	bprint(&p);
//	return 0;
//}


//�ṹ������ڴ�������
//�ṹ����ڴ�������:
//1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2.������Ա����Ҫ���뵽ĳ������(������)���������ĵ�ַ����
// 
//    ������ = min{ ������Ĭ�ϵ�һ�����������ó�Ա��С }
//    VS��Ĭ�ϵ�ֵΪ8
// 
//3.�ṹ���ܴ�СΪ��������(ÿ����Ա��������һ��������)����������
//4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ�����������������������
//�ṹ��������С����������������(��Ƕ�׽ṹ��Ķ�����)����������

#include <stddef.h>
//typedef struct S1
//{
//	char c1;
//	int i;
//	char c2;
//}S1;
//typedef struct S2
//{
//	char c1;
//	char c2;
//	int i;
//}S2;
//int main()
//{
//	printf("%d\n", sizeof(S1));
//	printf("%d\n", sizeof(S2));
//	printf("%d %d %d\n", offsetof(S1, c1), offsetof(S1, i), offsetof(S1, c2));
//	printf("%d %d %d\n", offsetof(S2, c1), offsetof(S2, c2), offsetof(S2, i));
//
//	return 0;
//}

//����λ�α����ȶ�
//���ԣ��ṹ����λ��һ����Զ�����ͬ������

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	return 0;
}