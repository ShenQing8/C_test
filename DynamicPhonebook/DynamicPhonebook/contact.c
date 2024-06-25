#include "contact.h"

//初始化
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

//改变空间
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

//增
void Add_Peo(Contact* pc)
{
	assert(pc);
	Rloc(pc, 1);
	printf("请输入姓名：\n");
	scanf("%s", pc->pp[pc->count-1].name);
	printf("请输入性别：\n");
	scanf("%s", pc->pp[pc->count - 1].sex);
	printf("请输入年龄：\n");
	scanf("%d",&(pc->pp[pc->count-1].age));
	printf("请输入电话号：\n");
	scanf("%s", pc->pp[pc->count-1].tel);
	printf("添 加 成 功\n");
}

typedef struct Loca
{
	int i;//循环次数
	int x;//y的下标
	int y[10];//存放同名人的下标
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
		printf("未找到联系人\n");
	}
	return k;
}

//查
void Srh_Peo(const Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	char sname[MAX_NAME] = { 0 };
	printf("请输入要查找联系人的名字：\n");
	scanf("%s", sname);
	Srh_Name(pc, sname);
}

//删
void Del_Peo(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录为空，无可删除联系人\n");
		return;
	}
	char sname[MAX_NAME] = { 0 };
	printf("请输入要删除联系人的名字：\n");
	scanf("%s", sname);
	Loca k = Srh_Name(pc, sname);
	if (k.x == 0)
	{
		;
	}
	else if (k.x > 1)
	{
		int a = 0;
		printf("请问要删除第几号联系人：\n");
		scanf("%d", &a);
		printf("%-10s\t%-5s\t%-3s\t%-13s\n", "姓名", "性别", "年龄", "电话");
		printf("%-10s\t%-5s\t%-3d\t%-13s\n", pc->pp[k.y[a - 1]].name,
											 pc->pp[k.y[a - 1]].sex,
											 pc->pp[k.y[a - 1]].age,
											 pc->pp[k.y[a - 1]].tel);
		printf("确定要删除此联系人吗？（Y/N）\n");
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
			printf("删除成功\n");
		}

	}
	else
	{
		char b[2] = { 0 };
		printf("确认要删除此联系人吗？（Y/N）\n");
		scanf("%s", b);
		if (0 == strcmp(b, "y") || 0 == strcmp(b, "Y"))
		{
			int i = 0;
			for (i = k.y[0]; i < pc->count - 1; i++)
			{
				pc->pp[i] = pc->pp[i + 1];
			}
			Rloc(pc, -1);
			printf("删除成功\n");
		}
	}
}

//改
void Crc_Peo(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	char sname[MAX_NAME] = { 0 };
	printf("请输入要更改联系人的名字：\n");
	scanf("%s", sname);
	printf("    %-10s\t%-5s\t%-3s\t%-13s\n", "姓名", "性别", "年龄", "电话");
	Loca k = Srh_Name(pc, sname);
	if (k.x == 0)
	{
		;
	}
	else if (k.x > 1)
	{
		int a = 0;
		printf("请问要更改第几号联系人：\n");
		scanf("%d", &a);
		printf("%-10s\t%-5s\t%-3s\t%-13s\n", "姓名", "性别", "年龄", "电话");
		printf("%-10s\t%-5s\t%-3d\t%-13s\n", pc->pp[k.y[a - 1]].name,
											 pc->pp[k.y[a - 1]].sex,
											 pc->pp[k.y[a - 1]].age,
											 pc->pp[k.y[a - 1]].tel);
		printf("开始修改此联系人信息：\n");
		printf("请输入姓名：\n");
		scanf("%s", pc->pp[k.y[a - 1]].name);
		printf("请输入性别：\n");
		scanf("%s", pc->pp[k.y[a - 1]].sex);
		printf("请输入年龄：\n");
		scanf("%d", &(pc->pp[k.y[a - 1]].age));
		printf("请输入电话号：\n");
		scanf("%s", pc->pp[k.y[a - 1]].tel);
	}
	else
	{
		printf("开始修改此联系人信息：\n");
		printf("请输入姓名：\n");
		scanf("%s", pc->pp[k.y[0]].name);
		printf("请输入性别：\n");
		scanf("%s", pc->pp[k.y[0]].sex);
		printf("请输入年龄：\n");
		scanf("%d", &(pc->pp[k.y[0]].age));
		printf("请输入电话号：\n");
		scanf("%s", pc->pp[k.y[0]].tel);
	}
}

//显示
void Pre_Peo(const Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("\n暂 无 联 系 人\n\n");
		return;
	}
	printf("%-10s\t%-5s\t%-3s\t%-13s\n", "姓名", "性别", "年龄", "电话");
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		printf("%-10s\t%-5s\t%-3d\t%-13s\n", pc->pp[i].name, pc->pp[i].sex, pc->pp[i].age, pc->pp[i].tel);
	}
}

//排序

int cmp_name(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
void Sort_Peo(const Contact* pc)
{
	qsort(pc->pp, pc->count, sizeof(PeoIfm), cmp_name);
	printf("排序成功\n");
}

//销毁
void Distroy(Contact* pc)
{
	assert(pc);
	free(pc->pp);
	pc = NULL;
}
