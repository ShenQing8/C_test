#include "contact.h"

//增、删、查、改、显示、排序

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
	//初始化电话簿
	InitContact(&book);
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Add_Peo(&book);
			break;
		case 2:
			Del_Peo(&book);
			break;
		case 3:
			Srh_Peo(&book);
			break;
		case 4:
			Crc_Peo(&book);
			break;
		case 5:
			Pre_Peo(&book);
			break;
		case 6:
			Sort_Peo(&book);
			break;
		case 0:
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}