#define __STDC_WANT_LIB_EXT1__ 1
#include"contact.h"
void intcontact(struct contact* ps)
{   //初始化
	memset(ps->data, 0, sizeof(ps->data));//修改结构体中内容，都赋值成0
	ps->size = 0;
}
void addcontact(struct contact* ps)
{
	if (ps->size == max)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入名字:\n");
		scanf_s("%s", ps->data[ps->size].name,7);
		printf("请输入性别:\n");
		scanf_s("%s", ps->data[ps->size].sex,3);
		printf("请输入电话号码:\n");
		scanf_s("%s", ps->data[ps->size].number,12);
		printf("请输入地址:\n");
		scanf_s("%s", ps->data[ps->size].address,9);
		ps->size++;
		printf("添加成功\n");
	}
}
void printcontact(const struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("请给通讯录添加信息\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-3s\t%-20s\t%-20s\t\n", "名字", "性别", "电话号码", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-3s\t%-20s\t%-20s\t\n",
				ps->data[i].name,
				ps->data[i].sex,
				ps->data[i].number,
				ps->data[i].address );
			
		}
	}
}
static int findname(struct contact* ps, char name[max_name])//查找名字函数封装
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
			break;
		}
	}
	return -1;//没找到
}
void delcontact(struct contact* ps)
{
	char name[max_name];
	printf("请输入要删除人的名字：\n");
	scanf_s("%s", name, 10);
	 int position = findname(ps, name);
	if (-1 == position)
	{
		printf("没有此人的信息\n");
	}
     else
	{
		int j = 0;
		for (j = position; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;													
		printf("删除成功\n");
	}


}
void searchcontact(struct contact* ps)
{
	char name[max_name];
	printf("请输入要查找人的名字：\n");
	scanf_s("%s", name, 10);
	int position = findname(ps, name);
	if (-1 == position)
	{
		printf("没有此人的信息\n");
	}
			
	else
	{
		printf("%-20s\t%-3s\t%-20s\t%-20s\t\n", "名字", "性别", "电话号码", "地址");
		printf("%-20s\t%-3s\t%-20s\t%-20s\t\n",
			ps->data[position].name,
			ps->data[position].sex,
			ps->data[position].number,
			ps->data[position].address);

	}

}
void modifycontact(struct contact* ps)
{
	char name[max_name];
	printf("请输入要修改人的名字：\n");
	scanf_s("%s", name, 10);
	int position = findname(ps, name);
	if (-1 == position)
	{
		printf("没有此人的信息\n");
	}
	else
	{
		printf("开始修改:\n");
		printf("请输入名字:\n");
		scanf_s("%s", ps->data[position].name, 7);
		printf("请输入性别:\n");
		scanf_s("%s", ps->data[position].sex, 3);
		printf("请输入电话号码:\n");
		scanf_s("%s", ps->data[position].number, 12);
		printf("请输入地址:\n");
		scanf_s("%s", ps->data[position].address, 9);
		ps->size++;
		printf("添加成功\n");
	}
}