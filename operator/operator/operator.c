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

	//0��ʾ�٣���0��ʾ��
	//int flag = 0;
	//if (!flag)
	//{
	//	printf("666\n");
	//}

	//sizof�ǵ�Ŀ�����
	//int a = 0;
	//printf("%d\n", sizeof(a));//sizaof a
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(float));

	////ǰ�ú���++ --��--ͬ��
	////int a = 10;
	////int b = a++;//��ʹ�ã���+1��b=a��a=a+1
	//int a = 10;
	//int b = ++a;//��+1����ʹ�á�a=a+1,b=a
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
	
	//���ű��ʽexp1,exp2,exp3,����,expn
	//������Ϊ���һ��ʽ�ӵĽ��
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
//	// && ��������������㣬������ĳһ�����ʽΪ��ʱ�����ټ������㣬����0��
//	// || ͬ��������ĳһ�����ʽΪ��ʱ������������㣬����1��
//
//	printf("a = %d\n,b = %d\n,c = %d\n,d = %d\n", a, b, c, d);
//
//	return 0;
//}

//��Ŀ������   exp1?exp2:exp3

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

//�±����ò�������[]�����ö����� arr �� �±�

//int main()
//{
//	int arr[10] = { 0 };
//	arr[6] = 8;
//	6[arr] = 9;
//	//
//	//arr[6] --> *(arr+6)
//	//arr��ʾ��Ԫ�ص�ַ��+6������7��Ԫ�ص�ַ
//	// * ������
//	//
//	printf("%d\n", arr[6]);
//	return 0;
//}

//���ڽṹ��Ĳ�����  .  ->

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