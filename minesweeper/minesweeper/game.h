#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define SET_MINE 10


//打印菜单
void menu();

//游戏运行
void game();

//初始化
void InitChar(char mine[ROWS][COLS], int row, int col, char set);
void InitChar(char show[ROWS][COLS], int row, int col, char set);

//布雷
void SetMine(char ch[ROWS][COLS], int row, int col);

//打印面板
void DisplayBoard(char ch[ROWS][COLS], int row, int col);

//用户输入坐标扫雷
void PlayerSweep(char mine[ROWS][COLS], char show[ROWS][COLS], char view[ROWS][COLS], int row, int col);

//踩到雷
void DisplayFinal(char ch[ROWS][COLS], int row, int col);

//没踩到雷
//int Secure(char ch[ROWS][COLS], int x, int y);
void Secure(char mine[ROWS][COLS], char show[ROWS][COLS], char view[ROWS][COLS], int x, int y,int *count);
