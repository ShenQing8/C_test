#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		//��ӡ�˵�
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���벻�Ϲ棬����������\n");
			break;
		}
	} while (input);
	return 0;
}