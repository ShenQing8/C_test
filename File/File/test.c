#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

//ANSIC 标准采用“缓冲文件系统”处理的数据文件的，
//所谓缓冲文件系统是指系统自动地在内存中为程序中每一个正在使用的文件开辟一块“文件缓冲区”。
//从内存向磁盘输出数据会先送到内存中的缓冲区，装满缓冲区后才一起送到磁盘上。
//如果从磁盘向计算机读入数据，则从磁盘文件中读取数据输入到内存缓冲区(充满缓冲区)，
//然后再从缓冲区逐个地将数据送到程序数据区(程序变量等)。缓冲中区的大小根据C编译系统决定的。
// 
//因为有缓冲区的存在，C语言在操作文件时，需要做刷新缓冲区或
//在文件操作结束时关闭文件。
//如果不做，可能导致数据丢失。

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

//int main()
//{
//	PS p;
//	p.i = 2;
//	p.pp = (S*)malloc(2 * sizeof(S));
//	if (p.pp == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取
//	int j = 0;
//	for (j = 0; j < p.i; j++)
//	{
//		fscanf(pf, "%s %d %f", (p.pp + j)->name, &((p.pp + j)->age), &((p.pp + j)->score));
//	}
//
//	for (j = 0; j < p.i; j++)
//	{
//		printf("%s %d %.2f\n", (p.pp + j)->name, (p.pp + j)->age, (p.pp + j)->score);
//	}
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//以二进制方式进行读写
//fread,fwrite

//文件随机读写
//fseek,ftell,rewind

//牢记:在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。
//而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束
// 1.文本文件读取是否结束，判断返回值是否为 E0F(fgetc)，或者 NULL(fgets)例如ofgetc判断是否为 EOF，fgets 判断返回值是否为 NULL.
// 2.二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。例如:fread判断返回值是否小于实际要读的个数。
int main()
{
	int c;
	FILE* pf = fopen("test.txt", "r");
	if (!pf)
	{
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	while ((c = fgetc(pf)) != EOF)
	{
		putchar(c);
	}
	if (ferror(pf))
		puts("\nI/O ERROR in reading\n");//读文件时遇到错误
	else if (feof(pf))
		puts("\nEnd of file reached successfully\n");//读到文件末尾
	fclose(pf);
	pf = NULL;
	return 0;
}