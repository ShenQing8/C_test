#include "game.h"



int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		menu();//打印菜单
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);


	return 0;
}