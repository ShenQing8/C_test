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
	//00000000 00000000 00000000 00001010
	//010   正数，原反补相同
	s.b = 12;
	//00000000 00000000 00000000 00001100
	//1100  负数
	//11111111 11111111 11111111 11111100
	//11111111 11111111 11111111 11111011
	//10000000 00000000 00000000 00000100  --->-4
	s.c = 3;
	s.d = 4;
	printf("%d %d %d %d\n", s.a, s.b, s.c, s.d);

	return 0;
}

//枚举
//我们可以使用 #define 定义常量，为什么非要使用枚举?
//枚举的优点:
//1.增加代码的可读性和可维护性
//2.和#define定义的标识符比较枚举有类型检查，更加严谨
//3.防止了命名污染(封装)
//4. 便于调试
//5.使用方便，一次可以定义多个常量
// 
//联合
//联合的大小至少是最大成员的大小。当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍
//联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小(因为联合至少得有能力保存最大的那个成员)。