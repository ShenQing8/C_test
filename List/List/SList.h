#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef int SLTDataType;

//��������ṹ
typedef struct SListNode
{
	SLTDataType data;      //��������
	struct SListNode* next;//��һ������ĵ�ַ
}SListNode;

void SLTdef();
void SLTPrint(SListNode* phead);