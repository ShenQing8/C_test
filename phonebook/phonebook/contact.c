#include "contact.h"

//��ʼ��
void InitContact(Contact* pc)
{
	pc->count = 0;
	memset(pc->pp, 0, sizeof(pc->pp));
}

//��
void Add_Peo(Contact* pc)
{
	assert(pc);
	printf("������������\n");
	scanf("%s", pc->pp[pc->count].name);
	printf("�������Ա�\n");
	scanf("%s", pc->pp[pc->count].sex);
	printf("���������䣺\n");
	scanf("%d", &(pc->pp[pc->count].age));
	printf("������绰�ţ�\n");
	scanf("%s", pc->pp[pc->count].tel);
	pc->count++;
}

typedef struct Loca
{
	int i;
	int x;
	int y[10];
}Loca;
static Loca Srh_Name(const Contact* pc, char sname[])
{
	Loca k = { 0 };
	for (k.i = 0; k.i < pc->count; k.i++)
	{
		if (0 == strcmp(pc->pp[k.i].name, sname))
		{
			k.y[k.x] = k.i;
			k.x++;
			printf("%-3d %-10s\t%-5s\t%-3d\t%-13s\n", k.x, pc->pp[k.i].name, pc->pp[k.i].sex, pc->pp[k.i].age, pc->pp[k.i].tel);
		}
	}
	if (k.x == 0)
	{
		printf("δ�ҵ���ϵ��\n");
	}
	return k;
}

//��
void Srh_Peo(const Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ��");
		return;
	}
	char sname[MAX_NAME] = { 0 };
	printf("������Ҫ������ϵ�˵����֣�\n");
	scanf("%s", sname);
	Srh_Name(pc, sname);
}

//ɾ
void Del_Peo(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޿�ɾ����ϵ��");
		return;
	}
	char sname[MAX_NAME] = { 0 };
	printf("������Ҫɾ����ϵ�˵����֣�\n");
	scanf("%s", sname);
	Loca k = Srh_Name(pc, sname);
	if (k.x == 0)
	{
		;
	}
	else if (k.x > 1)
	{
		int a = 0;
		printf("����Ҫɾ���ڼ�����ϵ�ˣ�\n");
		scanf("%d", &a);
		//     ��bug�ˣ�����
		//printf("%-10s\t%-5s\t%-3d\t%-13s\n", pc->pp[k.y[a - 1]].name,
		//	                                 pc->pp[k.y[a - 1]].sex,
		//	                                 pc->pp[k.y[a - 1]].age,
		//	                                 pc->pp[k.y[a - 1]].tel);
		//printf("ȷ��Ҫɾ������ϵ���𣿣�Y/N��\n");
		//char b;
		//scanf("%c", &b);
		//if (b == 'y' || b == 'Y')
		//{
		//	int i = 0;
		//	for (i = k.y[a - 1]; i < pc->count - 1; i++)
		//	{
		//		pc->pp[i] = pc->pp[i + 1];
		//	}
		//	pc->count--;
		//	printf("ɾ���ɹ�\n");
		//}
		printf("%-10s\t%-5s\t%-3s\t%-13s\n", "����", "�Ա�", "����", "�绰");
		printf("%-10s\t%-5s\t%-3d\t%-13s\n", pc->pp[k.y[a - 1]].name,
											 pc->pp[k.y[a - 1]].sex,
											 pc->pp[k.y[a - 1]].age,
											 pc->pp[k.y[a - 1]].tel);
		printf("ȷ��Ҫɾ������ϵ���𣿣�Y/N��\n");
		char b[2] = { 0 };
		scanf("%s", b);
		if (0 == strcmp(b, "y") || 0 == strcmp(b, "Y"))
		{
			int i = 0;
			for (i = k.y[a - 1]; i < pc->count - 1; i++)
			{
				pc->pp[i] = pc->pp[i + 1];
			}
			pc->count--;
			printf("ɾ���ɹ�\n");
		}

	}
	else
	{
		char b[2] = { 0 };
		printf("ȷ��Ҫɾ������ϵ���𣿣�Y/N��\n");
		scanf("%s", b);
		if (0 == strcmp(b, "y") || 0 == strcmp(b, "Y"));
		{
			int i = 0;
			for (i = k.y[0]; i < pc->count - 1; i++)
			{
				pc->pp[i] = pc->pp[i + 1];
			}
			pc->count--;
		}
		printf("ɾ���ɹ�\n");
	}
}

//��
void Crc_Peo(Contact* pc)
{
	assert(pc);
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ��");
		return;
	}
	char sname[MAX_NAME] = { 0 };
	printf("������Ҫ������ϵ�˵����֣�\n");
	scanf("%s", sname);
	printf("    %-10s\t%-5s\t%-3s\t%-13s\n", "����", "�Ա�", "����", "�绰");
	Loca k = Srh_Name(pc, sname);
	if (k.x == 0)
	{
		;
	}
	else if (k.x > 1)
	{
		int a = 0;
		printf("����Ҫ���ĵڼ�����ϵ�ˣ�\n");
		scanf("%d", &a);
		printf("%-10s\t%-5s\t%-3s\t%-13s\n", "����", "�Ա�", "����", "�绰");
		printf("%-10s\t%-5s\t%-3d\t%-13s\n", pc->pp[k.y[a - 1]].name,
											 pc->pp[k.y[a - 1]].sex,
											 pc->pp[k.y[a - 1]].age,
											 pc->pp[k.y[a - 1]].tel);
		printf("��ʼ�޸Ĵ���ϵ����Ϣ��\n");
		printf("������������\n");
		scanf("%s", pc->pp[k.y[a - 1]].name);
		printf("�������Ա�\n");
		scanf("%s", pc->pp[k.y[a - 1]].sex);
		printf("���������䣺\n");
		scanf("%d", &(pc->pp[k.y[a - 1]].age));
		printf("������绰�ţ�\n");
		scanf("%s", pc->pp[k.y[a - 1]].tel);
	}
	else
	{
		printf("��ʼ�޸Ĵ���ϵ����Ϣ��\n");
		printf("������������\n");
		scanf("%s", pc->pp[k.y[0]].name);
		printf("�������Ա�\n");
		scanf("%s", pc->pp[k.y[0]].sex);
		printf("���������䣺\n");
		scanf("%d", &(pc->pp[k.y[0]].age));
		printf("������绰�ţ�\n");
		scanf("%s", pc->pp[k.y[0]].tel);
	}
}

//��ʾ
void Pre_Peo(const Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("\n�� �� �� ϵ ��\n\n");
		return;
	}
	printf("%-10s\t%-5s\t%-3s\t%-13s\n", "����", "�Ա�", "����", "�绰");
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		printf("%-10s\t%-5s\t%-3d\t%-13s\n", pc->pp[i].name, pc->pp[i].sex, pc->pp[i].age, pc->pp[i].tel);
	}
}

//����

int cmp_name(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
void Sort_Peo(const Contact* pc)
{
	qsort(pc->pp, pc->count, sizeof(PeoIfm), cmp_name);
	printf("����ɹ�\n");
}