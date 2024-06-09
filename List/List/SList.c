#include "SList.h"

void SLTdef()
{
	//手动创建链表
	//1.先创建一个一个节点
	SListNode* node1 = (SListNode*)malloc(sizeof(SListNode));
	node1->data = 1;

	SListNode* node2 = (SListNode*)malloc(sizeof(SListNode));
	node2->data = 2;

	SListNode* node3 = (SListNode*)malloc(sizeof(SListNode));
	node3->data = 3;

	SListNode* node4 = (SListNode*)malloc(sizeof(SListNode));
	node4->data = 4;
	
	//四个节点用next连接起来
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;

	//打印出来
	SListNode* plist = node1;
	SLTPrint(plist);
}

//链表打印
void SLTPrint(SListNode* phead)
{
	SListNode* pcur = phead;
	while (pcur != NULL)
	{
		printf("%d -> ", pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}