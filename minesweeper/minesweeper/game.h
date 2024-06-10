#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define SET_MINE 10


//��ӡ�˵�
void menu();

//��Ϸ����
void game();

//��ʼ��
void InitChar(char mine[ROWS][COLS], int row, int col, char set);
void InitChar(char show[ROWS][COLS], int row, int col, char set);

//����
void SetMine(char ch[ROWS][COLS], int row, int col);

//��ӡ���
void DisplayBoard(char ch[ROWS][COLS], int row, int col);

//�û���������ɨ��
void PlayerSweep(char mine[ROWS][COLS], char show[ROWS][COLS], char view[ROWS][COLS], int row, int col);

//�ȵ���
void DisplayFinal(char ch[ROWS][COLS], int row, int col);

//û�ȵ���
//int Secure(char ch[ROWS][COLS], int x, int y);
void Secure(char mine[ROWS][COLS], char show[ROWS][COLS], char view[ROWS][COLS], int x, int y,int *count);
