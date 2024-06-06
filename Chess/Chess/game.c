#include "game.h"

//打印菜单
void menu()
{
	printf("*******************\n");
	printf("*****1、开始游戏***\n");
	printf("*****0、退出游戏***\n");
	printf("*******************\n");
}

//游戏运行
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret == '*')
		{
			printf("\t玩家赢\n");
			DisplayBoard(board, ROW, COL);
			break;
		}
		if (ret == 'a')
		{
			printf("\t平局\n");
			DisplayBoard(board, ROW, COL);
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret == '#')
		{
			printf("\t电脑赢\n");
			DisplayBoard(board, ROW, COL);
			break;
		}
		if (ret == 'a')
		{
			printf("\t平局\n");
			DisplayBoard(board, ROW, COL);
			break;
		}
	}
}

//初始化棋盘
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

//打印棋盘
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

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋\n");
	while (1)
	{
		printf("请输入坐标下棋:>");
		scanf("%d %d", &x, &y);
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("坐标非法，请重新选择\n");
		}
	}
}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
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

//判断输赢
char IsWin(char board[ROW][COL], int row, int col)
{
	//*是玩家赢
	//#是电脑赢
	//a是平局
	//c是继续
	int i = 0;
	int j = 0;
	//判断行
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
	//判断列
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
	//判断斜
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
	//判断平局
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