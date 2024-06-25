#include "contact.h"
//增、删、查、改、显示、排序

enum opt
{
	EXI,
	ADD,
	DEL,
	SRH,
	CRC,
	PRE,
	SOR
};
void menu()
{
	printf("----------------------------------\n");
	printf("---------1.添加联系人-------------\n");
	printf("---------2.删除联系人-------------\n");
	printf("---------3.查找联系人-------------\n");
	printf("---------4.修改联系人信息---------\n");
	printf("---------5.显示所有联系人---------\n");
	printf("---------6.排序-------------------\n");
	printf("---------0.退出-------------------\n");
	printf("----------------------------------\n");

}
int main()
{
	int input = 0;
	Contact book;
	InitContact(&book);
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Add_Peo(&book);
			break;
		case DEL:
			Del_Peo(&book);
			break;
		case SRH:
			Srh_Peo(&book);
			break;
		case CRC:
			Crc_Peo(&book);
			break;
		case PRE:
			Pre_Peo(&book);
			break;
		case SOR:
			Sort_Peo(&book);
			break;
		case EXI:
			Distroy(&book);
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}