#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	
//	//�����ļ���"test.c"Ӧ��ͬһ�ļ���
//	//��Ҫ������·���ļ�����Ҫ����·��������
//	//FILE* pf = fopen("D:\\Code\\File\\test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		//return 1;
//		perror("fopen");
//	}
//	//д��
//	//fputc('a', pf);
//	char ch = 'a';
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��
//	char ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "a");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д��
//	fputs("abcdefg\n", pf);
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ
//	char str[10];
//	fgets(str, 8, pf);
//	printf("%s\n", str);
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

typedef struct S
{
	char name[20];
	int age;
	float score;
}S;
typedef struct PS
{
	int i;
	S* pp;
}PS;
//int main()
//{
//	//S s = { "zhangsan",20,100.0f };
//	//PS* p = (PS*)malloc(sizeof(PS) + 20);
//	PS p;
//	p.i = 2;
//	p.pp = (S*)malloc(2 * sizeof(S));
//	if (p.pp == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д��
//	//fprintf(pf, "%s %d %.2f", s.name, s.age, s.score);
//	int j = 0;
//	for (j = 0; j < p.i; j++)
//	{
//		scanf("%s", (p.pp+j)->name);
//		scanf("%d", &((p.pp + j)->age));
//		scanf("%f", &((p.pp+j)->score));
//	}
//	for (j = 0; j < p.i; j++)
//	{
//		fprintf(pf, "%s %d %.2f\n", (p.pp + j)->name, (p.pp + j)->age, (p.pp + j)->score);
//	}
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	PS p;
	p.i = 2;
	p.pp = (S*)malloc(2 * sizeof(S));
	if (p.pp == NULL)
	{
		perror("malloc");
		return 1;
	}
	
	//���ļ�
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//��ȡ
	int j = 0;
	for (j = 0; j < p.i; j++)
	{
		fscanf(pf, "%s %d %f", (p.pp + j)->name, &((p.pp + j)->age), &((p.pp + j)->score));
	}

	for (j = 0; j < p.i; j++)
	{
		printf("%s %d %.2f\n", (p.pp + j)->name, (p.pp + j)->age, (p.pp + j)->score);
	}
	//�ر�
	fclose(pf);
	pf = NULL;
	return 0;
}

//�Զ����Ʒ�ʽ���ж�д
//fread,fwrite

//�ļ������д
//fseek,ftell,rewind