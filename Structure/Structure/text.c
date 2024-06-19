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
////结构体扩展
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
//	struct peo p = { "张三" ,"男","15264868888",182 };
//	struct peop g = { {"里斯","女","16699896666",165},49,200.0 };
//	//结构体传参
//	aprint(p);
//	bprint(&p);
//	return 0;
//}


//结构体存在内存对齐规则
//结构体的内存对齐规则:
//1.第一个成员在与结构体变量偏移量为0的地址处。
//2.其他成员变量要对齐到某个数字(对齐数)的整数倍的地址处。
// 
//    对齐数 = min{ 编译器默认的一个对齐数，该成员大小 }
//    VS中默认的值为8
// 
//3.结构体总大小为最大对齐数(每个成员变量都有一个对齐数)的整数倍。
//4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，
//结构体的整体大小就是所有最大对齐数(含嵌套结构体的对齐数)的整数倍。

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

//由于位段本身不稳定
//所以，结构体中位段一般而言都是相同的类型

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