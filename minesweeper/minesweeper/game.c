#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//��ӡ�˵�
void menu()
{
	printf("*******************************\n");
	printf("*******   1����ʼ��Ϸ  ********\n");
	printf("*******   0���˳���Ϸ  ********\n");
	printf("*******************************\n");
}

//��Ϸ����
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	char view[ROWS][COLS] = { 0 };
	//��ʼ��
	InitChar(mine, ROW, COL, '0');
	InitChar(show, ROW, COL, '#');
	InitChar(view, ROW, COL, '1');
	//����
	SetMine(mine, ROW, COL);

	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//�û���������ɨ��
	PlayerSweep(mine, show, view, ROW, COL);
}

//��ʼ��
void InitChar(char ch[ROWS][COLS], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			ch[i][j] = set;
		}
	}
}

//����
void SetMine(char ch[ROWS][COLS], int row, int col)
{
	int count = SET_MINE;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (ch[x][y] == '0')
		{
			ch[x][y] = '1';
			count--;
		} 
	}
}

//��ӡ���
void DisplayBoard(char ch[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("--------ɨ����Ϸ--------\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			if (i == 0)
				printf("%d ", j);
			else
				printf("%c ", ch[i][j]);
		}
		printf("\n");
	}
	printf("--------ɨ����Ϸ--------\n");
}

//�û���������ɨ��
void PlayerSweep(char mine[ROWS][COLS], char show[ROWS][COLS], char view[ROWS][COLS], int row, int col)
{
	//�����Ƿ�ȵ���
	//�����Ƿ��ظ�
	//�ж�ʤ�����
	int x = 0;
	int y = 0;
	int ret = 0;
	int count = row * col - SET_MINE;
	do
	{
		printf("��������Ҫ��ɨ������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && y >= 1 && x <= 9 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				printf("�㱻ըըըըըը���ˣ�����\n");
				DisplayFinal(mine, ROW, COL);
				return;
			}
			else if(show[x][y] == '#')
			{
				Secure(mine, show, view, x, y, &count);
				DisplayBoard(show, ROW, COL);
			}
			else
			{
				printf("�ظ����ף�����������\n");
			}
		}
		else
		{
			printf("���겻�Ϲ棬����������\n");
		}
	} while (count);
	DisplayFinal(mine, ROW, COL);
	printf("\t** * * *    *   ** *  *    * * * * *   * * \n");
	printf("\t* *   ** *** ��ϲ�㣬ͨ���ˣ�����    ** ***\n");
	printf("\t* * *    * * *  * ** * ** * *   **    * * *\n");
}

//�ȵ���
void DisplayFinal(char ch[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			if (ch[i][j] == '1')
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}

//û�ȵ���
//int Secure(char ch[ROWS][COLS], int x, int y)
//{
//	return (ch[x - 1][y - 1] +
//		ch[x - 1][y] +
//		ch[x - 1][y + 1] +
//		ch[x][y - 1] +
//		ch[x][y + 1] +
//		ch[x + 1][y - 1] +
//		ch[x + 1][y] +
//		ch[x + 1][y + 1] - 8 * '0');
//}

void Secure(char mine[ROWS][COLS], char show[ROWS][COLS], char view[ROWS][COLS], int x, int y,int *count)
{
	if (view[x][y] == '1' && x >= 1 && y >= 1 && x <= 9 && y <= 9)
	{
		*count--;
		int ret = 0;
		int i = 0;
		int j = 0;
		ret = (mine[x - 1][y - 1] +
			mine[x - 1][y] +
			mine[x - 1][y + 1] +
			mine[x][y - 1] +
			mine[x][y + 1] +
			mine[x + 1][y - 1] +
			mine[x + 1][y] +
			mine[x + 1][y + 1] - 8 * '0');
		if (ret == 0)
		{
			show[x][y] = ' ';
			view[x][y] -= '1';
			for (i = x-1; i <= x+1; i++)
			{
				for (j = y-1; j <= y+1; j++)
				{
					Secure(mine, show, view, i, j, &count);
				}
			}
		}
		else
		{
			show[x][y] = ret + '0';
			view[x][y] - '1';
		}
	}
}


//
//��ɢ
//����
//

