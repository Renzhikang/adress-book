#define __STDC_WANT_LIB_EXT1__ 1
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 1000
#define max_name 20
#define max_sex 3
#define max_number 20
#define max_address 20

struct peopleinformation
{
	char name[max_name];
	char sex[max_sex];
	char number[max_number];
	char address[max_address];
};
enum Option
{
	exist,
	add,
	del,
	search,
	modify,
	print,
	sort
};//利用枚举来提高test代码的可读性

//通讯录类型
struct contact
{
	struct peopleinformation data[max];//存放一个信息
	int size = 0;//记录当前已有的元素个数
};
void intcontact(struct contact* ps);
void addcontact(struct contact* ps);//增添联系人
void printcontact(const struct contact* ps);//const 定义成常量不能修改，打印联系人
void delcontact(struct contact* ps);//删除联系人
void searchcontact(struct contact* ps);//查找联系人
void modifycontact(struct contact* ps);