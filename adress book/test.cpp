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
	struct contact con;//创建通讯录,con变量是包含1000个元素的数组和zise
	intcontact(&con);//因为con中有两部分内容，所以需要传地址才能修改
	do
	{
		menu();
		printf("请输入:>\n");
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
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input); 
}