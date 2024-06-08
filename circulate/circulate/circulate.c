#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//芙芙

//#include<stdio.h>
//int main()
//{
//	int choosetime = 0;
//	printf("芙芙上线。\n");
//	while (choosetime < 90)
//	{
//		printf("芙芙我来啦：%d\n",choosetime);
//		choosetime++;
//	}
//	if (choosetime = 90)
//	{
//		printf("芙门永存！\n");
//	}
//	else
//	 {
//		printf("芙芙，即使歪了我也爱你。\n");
//	}
//	return 0;
//}


//#include <time.h>
//int main()
//{
//	//选项结构：分支语句 if、swich
//
//
//	//int a = 3;
//	//if (5 == a)//if(a == 5)
//	//	printf("hehe\n");
//	//int num = 0;
//	//scanf("%d", &num);
//	//if (num % 2 == 1)
//	//{
//	//	printf("奇数");
//	//}
//	//else
//	//{
//	//	printf("偶数");
//	//}
//	//int num = 1;
//	//while (num < 101)
//	//{
//	//	if (num % 2 == 1)
//	//	{
//	//		printf("%d ", num);
//	//	}
//	//	num++;
//	//}
//	//int num=0;
//	//for (num = 1; num < 101; num++)
//	//{
//	//	if (num % 2 == 1)
//	//	{
//	//		printf("%d ", num);
//	//	}
//	//}
//	//int day = 0;
//	//scanf("%d", &day);
//	//printf("星期%d", day);
//	//int day = 0;
//	//scanf("%d", &day);
//	//switch(day)                //(整形表达式)
//	//{
//	//case 1:                    //case后面跟  整型  常量  表达式
//	//case 2:
//	//case 3:
//	//case 4:
//	//case 5:
//	//	printf("weekday");
//	//	break;
//	//case 6:
//	//case 7:
//	//	printf("weekend");
//	//	break;
//	//default:
//	//	printf("选择错误");
//	//}
//
//
//
//	//循环结构：循环语句 while、for、do while、goto
//	//int a = 1;
//	//while (a < 10)
//	//{
//	//	a++;
//
//
//	//	if (5 == a)
//	//		//continue;
//	//		//break;
//	//	printf("%d ",a);
//	//}
//	//char password[20] = {0};
//	//printf("请输入密码:");
//	//scanf("%s", &password);
//	//int ti ;
//	//while ((ti = getchar()) != '\n')
//	//{
//	//	;
//	//}
//	////getchar();
//	////getchar();
//	////getchar();
//	////getchar();
//	////getchar();
//	//printf("请确认密码（Y/N）：");
//	//int ch = getchar();
//	//if ('Y' == ch)
//	//{
//	//	printf("Yes");
//	//}
//	//else if('N'==ch)
//	//{
//	//	printf("No");
//	//}
//	//else
//	//{
//	//	printf("选择错误");
//	//}
//	//int max = 0;
//	//int i = 1;
//	//int x = 0;
//	//scanf("%d", &max);
//	//while (i < 4)
//	//{
//	//	scanf("%d", &x);
//	//	if (max < x)
//	//	{
//	//		max = x;
//	//	}
//	//	i++;
//	//}
//	//printf("%d", max);
//	
//
//
//
//	//int year = 0;
//	//int month = 0;
//	//int date = 0;
//	//scanf("%4d%2d%2d", &year, &month, &date);
//	//printf("year=%d\n", year);
//	//printf("month=%.2d\n", month);
//	//printf("date=%02d\n", date);
//    //if(;;)//if(初始化；判断；调整)
//}
//

//逐字打印

//int main()
//{
//	char arr1[] = {"Welcome come to new world!!!"};
//	char arr2[] = {"############################"};
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (strcmp(arr1, arr2) != 0)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//
//	}
//	printf("Welcome come to new world!!!");
//	return 0;
//}

//猜数字游戏

//void menu()
//{
//	printf("*******请选择********\n");
//	printf("*********************\n");
//	printf("******1、play********\n");
//	printf("******2、exit********\n");
//	printf("*********************\n");
//}
//
//void game()
//{
//	//0~RAND_MAX（32767）
//	//生成随机数
//
//	int guess = 0;
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//猜数
//	//大了，小了，或相等了
//
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if(guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你！猜对了！\n");
//			break;
//		}
//	}
//}
//
////int *p = NULL
////int a = 0
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//NULL空指针
//
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("别tnnd乱填!!!重选\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//强制关机程序
//输入“我是猪”则取消关机

int main()
{
	char input[20] = { 0 };
	//提示一下
	system("shutdown -s -t 60");
	printf("友情提示：\n");
	printf("\t您的设备将在60秒之后关机\n");
again:
	printf("\t输入“我是猪”则取消关机\n");
	scanf("%s",input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}