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
};//����ö�������test����Ŀɶ���

//ͨѶ¼����
struct contact
{
	struct peopleinformation data[max];//���һ����Ϣ
	int size = 0;//��¼��ǰ���е�Ԫ�ظ���
};
void intcontact(struct contact* ps);
void addcontact(struct contact* ps);//������ϵ��
void printcontact(const struct contact* ps);//const ����ɳ��������޸ģ���ӡ��ϵ��
void delcontact(struct contact* ps);//ɾ����ϵ��
void searchcontact(struct contact* ps);//������ϵ��
void modifycontact(struct contact* ps);