#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	
//	//所打开文件与"test.c"应在同一文件夹
//	//若要打开其他路径文件，则要加上路径，如下
//	//FILE* pf = fopen("D:\\Code\\File\\test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		//return 1;
//		perror("fopen");
//	}
//	//写入
//	//fputc('a', pf);
//	char ch = 'a';
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读
//	char ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "a");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写入
//	fputs("abcdefg\n", pf);
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取
//	char str[10];
//	fgets(str, 8, pf);
//	printf("%s\n", str);
//	//关闭
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
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写入
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
//	//关闭
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
	
	//打开文件
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//读取
	int j = 0;
	for (j = 0; j < p.i; j++)
	{
		fscanf(pf, "%s %d %f", (p.pp + j)->name, &((p.pp + j)->age), &((p.pp + j)->score));
	}

	for (j = 0; j < p.i; j++)
	{
		printf("%s %d %.2f\n", (p.pp + j)->name, (p.pp + j)->age, (p.pp + j)->score);
	}
	//关闭
	fclose(pf);
	pf = NULL;
	return 0;
}

//以二进制方式进行读写
//fread,fwrite

//文件随机读写
//fseek,ftell,rewind