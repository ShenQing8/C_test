#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

char input[] = { 0 };

void sex()
{
	system("shutdown -s -t 60");
	printf("��?henti����ʲô�أ���\n");
	printf("ɬͼû�У���������豸90����Ҫ�ػ���\n\n");
	while (1)
	{
		printf("���롰�Ҵ��ˣ��Ժ��кö���һ���ȷ�����㡱����ȡ���ػ�Ŷ\n");
		scanf("%s", input);
		if (strcmp(input, "�Ҵ��ˣ��Ժ��кö���һ���ȷ������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
}

void game()
{
	printf("\t��\t��\t��\n");
	int guess = 0;
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	//����
	//���ˣ�С�ˣ��������
	printf("��ʱ�����ܰɣ�����50���ʱ��\n");
	printf("����1��100֮���һ�����֣��¶��˾Ͳ�����ػ�\n");
	system("shutdown -s -t 50");

	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣡�¶��ˣ�\n");
			system("shutdown -a");
			break;
		}
	}
}

void answer()
{
	system("shutdown -s -t 60");
	printf("ʲô����������⣿\n");
	printf("��û�У����������ػ�\n\n");
	while (1)
	{
		printf("���롰�ְ��Ҵ��ˡ�����ȡ���ػ�Ŷ\n");
		scanf("%s", input);
		if (strcmp(input, "�ְ��Ҵ���") == 0)
		{
			system("shutdown -a");
			break;
		}
	}

}

void punish()
{
	printf("��������ô���䰡��\n");
	printf("��������Ҫ�ܳͷ������û���ˣ��ػ��ɡ�");
	system("shutdown -s -t 60");
}


void choose()
{
	printf("���кö�����Ŷ~~~\n");
	printf("***************************\n");
	printf("*****1����ɬͼ*************\n");
	printf("*****2���������Ϸ��*******\n");
	printf("*****3�����ˣ����ǿ��𰸰�*\n");
	printf("***************************\n");
	printf("�������ѡ��һ�°ɣ�");

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
