#include "contact.h"
//����ɾ���顢�ġ���ʾ������

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
	printf("---------1.�����ϵ��-------------\n");
	printf("---------2.ɾ����ϵ��-------------\n");
	printf("---------3.������ϵ��-------------\n");
	printf("---------4.�޸���ϵ����Ϣ---------\n");
	printf("---------5.��ʾ������ϵ��---------\n");
	printf("---------6.����-------------------\n");
	printf("---------0.�˳�-------------------\n");
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
		printf("��ѡ��");
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
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}