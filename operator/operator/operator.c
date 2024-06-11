#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
	////int a = 9 / 2;
	////float a = 9.0 / 2.0;
	//int a = 9;
	//int b = 9 % 2;
	////printf("%d\n", a);
	//a %= 5;//a=9%5
	////printf("%.1f\n", a);
	//printf("%d\n", a);
	//printf("%d\n", b);

	//0表示假，非0表示真
	//int flag = 0;
	//if (!flag)
	//{
	//	printf("666\n");
	//}

	//sizof是单目运算符
	//int a = 0;
	//printf("%d\n", sizeof(a));//sizaof a
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(float));

	////前置后置++ --，--同理
	////int a = 10;
	////int b = a++;//先使用，后+1。b=a，a=a+1
	//int a = 10;
	//int b = ++a;//先+1，后使用。a=a+1,b=a
	//printf("%d\n", a);
	//printf("%d\n", b);

	//float a = (int)3.14;
	//printf("%.2f\n", a);

	//int a = 10;
	//if (a == 3)
	//{
	//	printf("%d\n", a);
	//	printf("666");
	//}

	//int a = 5;
	//int b = 6;
	//if (a && b )
	//{
	//	printf("6");
	//}
	//int a = 5;
	//int b = 0;
	//if (a || b)
	//{
	//	printf("6");
	//}

	//int a =0 ;
	//int b =0 ;
	//scanf("%d %d", &a,&b);
	//int r = a > b ? a : b;
	//printf("%d\n",r);
	
	//逗号表达式exp1,exp2,exp3,……,expn
	//计算结果为最后一个式子的结果
	//int a = 42;
	//int b = 10;
	//int c = 1;
	//int d = (c = c + b, a = a + 2, a + c);
	//printf("%d", d);
//	return 0;
//}

// &&   ||

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//
//	// && 运算符从左向右算，当碰到某一个表达式为假时，不再继续运算，返回0。
//	// || 同理，当碰到某一个表达式为真时，不再向后运算，返回1。
//
//	printf("a = %d\n,b = %d\n,c = %d\n,d = %d\n", a, b, c, d);
//
//	return 0;
//}

//三目操作符   exp1?exp2:exp3

//int main()
//{
//	int a = 3;
//	int b = 0;
//
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//	b = (a > 5 ? 3 : -3);
//
//	//int max = 0;
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	int max = (a > b ? a : b);
//
//	return 0;
//}

//下标引用操作符：[]，引用对象是 arr 和 下标

//int main()
//{
//	int arr[10] = { 0 };
//	arr[6] = 8;
//	6[arr] = 9;
//	//
//	//arr[6] --> *(arr+6)
//	//arr表示首元素地址，+6则代表第7个元素地址
//	// * 解引用
//	//
//	printf("%d\n", arr[6]);
//	return 0;
//}

//关于结构体的操作符  .  ->

#include <string.h>

struct stu
{
	char name[20];
	int age;
	float score;
};
void set_stu(struct stu* ps)
{
	//strcpy((*ps).name, "zhangsan");
	//(*ps).age = 18;
	//(*ps).score = 100.0;

	strcpy(ps->name, "zhangsan");
	ps->age = 18;
	ps->score = 100.0;
}
void print_stu(struct stu *ps)
{
	printf("%s\n%d\n%.2f\n",ps->name,ps->age,ps->score);
}
int main()
{
	struct stu s;
	set_stu(&s);
	print_stu(&s);
	return 0;
}