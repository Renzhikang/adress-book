#define __STDC_WANT_LIB_EXT1__ 1
#include"contact.h"
void menu()
{
	printf("******************************************\n");
	printf("*********1.add      2.del*****************\n");
	printf("*********3.search   4.modify**************\n");
	printf("*********5.print    6.sort****************\n");
	printf("*********0.exist    **********************\n");
	printf("******************************************\n");

}
int main()
{
	int input = 0;
	struct contact con;//����ͨѶ¼,con�����ǰ���1000��Ԫ�ص������zise
	intcontact(&con);//��Ϊcon�������������ݣ�������Ҫ����ַ�����޸�
	do
	{
		menu();
		printf("������:>\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case add:
			addcontact(&con);
		    break;
		case del:
			delcontact(&con);
			break;
		case search:
			searchcontact(&con);
			break;
		case modify:
			modifycontact(&con);
			break;
		case print:
			printcontact(&con);
			break;
		case sort:
			break;
		case exist:
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input); 
}