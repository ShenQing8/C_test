#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
//内存可大致分为：栈区、堆区、静态区
//所保存的东向西不一样
//栈区：局部变量，形式参数
//堆区：malloc,calloc,realoc,free
//静态区：全局变量
//

//malloc

//int main()
//{
//	int* p = (int*)malloc(20);
//	//malloc开辟成功，则返回void*类型的指针
//	//如果返回失败，则返回NULL
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
//	//可见，free只是重置这块空间存放的值，并不会销毁p
//    //所以形成了p这个野指针
//	//安全的写法是：free之后再将p = NULL
//	p = NULL;
//	printf("0x%p", p);
//
//	//没有free
//	//并不代表内存就不回收
//	//当程序退出时，内存会自动回收
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
//	//malloc与calloc的区别就是，calloc会初始化
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
//	//开辟
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//扩容
//	int* ptr = (int*)realloc(p, 8000);
//	//realloc开辟的空间不可直接赋给p
//	//可能开辟空间失败，则返回空指针，便将p改为了NULL
//
//	//realloc扩容空间时有两种情况
//	//1、原空间后面的空间够大，则直接扩容
//	//2、若原空间后面的空间被使用了，不够大，则在内存中重新找一块够大的空间
//	//并将数据拷贝过来，将原空间释放
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