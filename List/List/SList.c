#include "SList.h"

void SLTdef()
{
	//�ֶ���������
	//1.�ȴ���һ��һ���ڵ�
	SListNode* node1 = (SListNode*)malloc(sizeof(SListNode));
	node1->data = 1;

	SListNode* node2 = (SListNode*)malloc(sizeof(SListNode));
	node2->data = 2;

	SListNode* node3 = (SListNode*)malloc(sizeof(SListNode));
	node3->data = 3;

	SListNode* node4 = (SListNode*)malloc(sizeof(SListNode));
	node4->data = 4;
	
	//�ĸ��ڵ���next��������
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;

	//��ӡ����
	SListNode* plist = node1;
	SLTPrint(plist);
}

//�����ӡ
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