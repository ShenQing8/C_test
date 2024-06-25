#include "contact.h"

//��ʼ��
void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	pc->pp = (PeoIfm*)calloc(1, sizeof(PeoIfm));
	if (pc->pp == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
}

//�ı�ռ�
void Rloc(Contact* pc, int x)
{
	pc->count += x;
	PeoIfm* tmp = (PeoIfm*)realloc(pc->pp, (pc->count) * sizeof(PeoIfm));
	if (tmp == NULL)
	{
		printf("Rloc::%s\n", strerror(errno));
		return;
	}
	else
	{
		pc->pp = tmp;
		tmp = NULL;
	}
}

//��
void Add_Peo(Contact* pc)
{
	assert(pc);
	Rloc(pc, 1);
	printf("������������\n");
	scanf("%s", pc->pp[pc->count-1].name);
	printf("�������Ա�\n");
	scanf("%s", pc->pp[pc->count - 1].sex);
	printf("���������䣺\n");
	scanf("%d",&(pc->pp[pc->count-1].age));
	printf("������绰�ţ�\n");
	scanf("%s", pc->pp[pc->count-1].tel);
	printf("�� �� �� ��\n");
}

typedef struct Loca
{
	int i;//ѭ������
	int x;//y���±�
	int y[10];//���ͬ���˵��±�
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
			printf("%-3d %-10s\t%-5s\t%-3d\t%-13s\n", k.x, pc->pp[k.i].name,
														   pc->pp[k.i].sex,
														   pc->pp[k.i].age,
														   pc->pp[k.i].tel);
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
		printf("ͨѶ¼Ϊ��\n");
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
		printf("ͨѶ¼Ϊ�գ��޿�ɾ����ϵ��\n");
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
			Rloc(pc, -1);
			printf("ɾ���ɹ�\n");
		}

	}
	else
	{
		char b[2] = { 0 };
		printf("ȷ��Ҫɾ������ϵ���𣿣�Y/N��\n");
		scanf("%s", b);
		if (0 == strcmp(b, "y") || 0 == strcmp(b, "Y"))
		{
			int i = 0;
			for (i = k.y[0]; i < pc->count - 1; i++)
			{
				pc->pp[i] = pc->pp[i + 1];
			}
			Rloc(pc, -1);
			printf("ɾ���ɹ�\n");
		}
	}
}

//��
void Crc_Peo(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
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

//����
void Distroy(Contact* pc)
{
	assert(pc);
	free(pc->pp);
	pc = NULL;
}
