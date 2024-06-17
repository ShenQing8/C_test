#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

char input[] = { 0 };

void sex()
{
	system("shutdown -s -t 60");
	printf("啊?henti！想什么呢？！\n");
	printf("涩图没有，不过你的设备90秒后就要关机了\n\n");
	while (1)
	{
		printf("输入“我错了，以后有好东西一定先分享给你”才能取消关机哦\n");
		scanf("%s", input);
		if (strcmp(input, "我错了，以后有好东西一定先分享给你") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
}

void game()
{
	printf("\t猜\t数\t字\n");
	int guess = 0;
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	//猜数
	//大了，小了，或相等了
	printf("和时间赛跑吧，你有50秒的时间\n");
	printf("输入1到100之间的一个数字，猜对了就不给你关机\n");
	system("shutdown -s -t 50");

	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你！猜对了！\n");
			system("shutdown -a");
			break;
		}
	}
}

void answer()
{
	system("shutdown -s -t 60");
	printf("什么癞蛤蟆想吃天鹅肉？\n");
	printf("答案没有，不过会给你关机\n\n");
	while (1)
	{
		printf("输入“爸爸我错了”才能取消关机哦\n");
		scanf("%s", input);
		if (strcmp(input, "爸爸我错了") == 0)
		{
			system("shutdown -a");
			break;
		}
	}

}

void punish()
{
	printf("啊？你怎么乱输啊？\n");
	printf("不听话就要受惩罚，这次没救了，关机吧。");
	system("shutdown -s -t 60");
}


void choose()
{
	printf("还有好东西的哦~~~\n");
	printf("***************************\n");
	printf("*****1、看涩图*************\n");
	printf("*****2、来玩个游戏吧*******\n");
	printf("*****3、算了，还是看答案吧*\n");
	printf("***************************\n");
	printf("输入序号选择一下吧：");

}
int main()
{
	srand((unsigned int)time(NULL));
	int cho = 0;
	choose();
	scanf("%d", &cho);
	printf("\n");
	switch (cho)
	{
	case 1:
		sex();
		break;
	case 2:
		game();
		break;
	case 3:
		answer();
		break;
	default:
		punish();
		break;
	}
	

	return 0;
}

//int main()
//{
//	system("shutdown -a");
//	return 0;
//}
