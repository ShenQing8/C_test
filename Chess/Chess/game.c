#include "game.h"

//��ӡ�˵�
void menu()
{
	printf("*******************\n");
	printf("*****1����ʼ��Ϸ***\n");
	printf("*****0���˳���Ϸ***\n");
	printf("*******************\n");
}

//��Ϸ����
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret == '*')
		{
			printf("\t���Ӯ\n");
			DisplayBoard(board, ROW, COL);
			break;
		}
		if (ret == 'a')
		{
			printf("\tƽ��\n");
			DisplayBoard(board, ROW, COL);
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret == '#')
		{
			printf("\t����Ӯ\n");
			DisplayBoard(board, ROW, COL);
			break;
		}
		if (ret == 'a')
		{
			printf("\tƽ��\n");
			DisplayBoard(board, ROW, COL);
			break;
		}
	}
}

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������\n");
	while (1)
	{
		printf("��������������:>");
		scanf("%d %d", &x, &y);
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("����Ƿ���������ѡ��\n");
		}
	}
}

//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
	int x = 0;
	int y = 0;
	int i = 0;
	while (i < row * col)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col)
{
	//*�����Ӯ
	//#�ǵ���Ӯ
	//a��ƽ��
	//c�Ǽ���
	int i = 0;
	int j = 0;
	//�ж���
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col - 1; j++)
		{
			if (board[i][j] == board[i][j + 1] && (board[i][j] == '*' || board[i][j] == '#'))
				continue;
			else
				break;
		}
		if (j == col - 1)
			return board[i][j];
	}
	//�ж���
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row - 1; i++)
		{
			if (board[i][j] == board[i + 1][j] && (board[i][j] == '*' || board[i][j] == '#'))
				continue;
			else
				break;
		}
		if (i == row - 1)
			return board[i][j];
	}
	//�ж�б
	i = 0;
	j = 0;
	while (i < row - 1)
	{
		if (board[i][j] == board[i + 1][j + 1] && (board[i][j] == '*' || board[i][j] == '#'))
		{
			i++;
			j++;
		}
		else
		{
			break;
		}
		if (i == row - 1)
			return board[i][j];
	}
	i = 0;
	j = col - 1;
	while (i < row - 1)
	{
		if (board[i][j] == board[i + 1][j + 1] && (board[i][j] == '*' || board[i][j] == '#'))
		{
			i++;
			j--;
		}
		else
		{
			break;
		}
		if (i == row - 1)
			return board[i][j];
	}
	//�ж�ƽ��
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
				continue;
			else
				return 'c';
		}
	}
	if (i == row && j == col)
		return 'a';
	return 'c';
}