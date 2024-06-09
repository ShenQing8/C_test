#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef int SLTDataType;

//定义量表结构
typedef struct SListNode
{
	SLTDataType data;      //链表数据
	struct SListNode* next;//下一个链表的地址
}SListNode;

void SLTdef();
void SLTPrint(SListNode* phead);