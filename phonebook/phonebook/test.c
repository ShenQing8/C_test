#include "contact.h"

//����ɾ���顢�ġ���ʾ������

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
	//��ʼ���绰��
	InitContact(&book);
	do
	{
		menu();
		printf("��ѡ��");
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
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}