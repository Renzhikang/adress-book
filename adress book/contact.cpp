#define __STDC_WANT_LIB_EXT1__ 1
#include"contact.h"
void intcontact(struct contact* ps)
{   //��ʼ��
	memset(ps->data, 0, sizeof(ps->data));//�޸Ľṹ�������ݣ�����ֵ��0
	ps->size = 0;
}
void addcontact(struct contact* ps)
{
	if (ps->size == max)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������:\n");
		scanf_s("%s", ps->data[ps->size].name,7);
		printf("�������Ա�:\n");
		scanf_s("%s", ps->data[ps->size].sex,3);
		printf("������绰����:\n");
		scanf_s("%s", ps->data[ps->size].number,12);
		printf("�������ַ:\n");
		scanf_s("%s", ps->data[ps->size].address,9);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}
void printcontact(const struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("���ͨѶ¼�����Ϣ\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-3s\t%-20s\t%-20s\t\n", "����", "�Ա�", "�绰����", "��ַ");
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
static int findname(struct contact* ps, char name[max_name])//�������ֺ�����װ
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
	return -1;//û�ҵ�
}
void delcontact(struct contact* ps)
{
	char name[max_name];
	printf("������Ҫɾ���˵����֣�\n");
	scanf_s("%s", name, 10);
	 int position = findname(ps, name);
	if (-1 == position)
	{
		printf("û�д��˵���Ϣ\n");
	}
     else
	{
		int j = 0;
		for (j = position; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;													
		printf("ɾ���ɹ�\n");
	}


}
void searchcontact(struct contact* ps)
{
	char name[max_name];
	printf("������Ҫ�����˵����֣�\n");
	scanf_s("%s", name, 10);
	int position = findname(ps, name);
	if (-1 == position)
	{
		printf("û�д��˵���Ϣ\n");
	}
			
	else
	{
		printf("%-20s\t%-3s\t%-20s\t%-20s\t\n", "����", "�Ա�", "�绰����", "��ַ");
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
	printf("������Ҫ�޸��˵����֣�\n");
	scanf_s("%s", name, 10);
	int position = findname(ps, name);
	if (-1 == position)
	{
		printf("û�д��˵���Ϣ\n");
	}
	else
	{
		printf("��ʼ�޸�:\n");
		printf("����������:\n");
		scanf_s("%s", ps->data[position].name, 7);
		printf("�������Ա�:\n");
		scanf_s("%s", ps->data[position].sex, 3);
		printf("������绰����:\n");
		scanf_s("%s", ps->data[position].number, 12);
		printf("�������ַ:\n");
		scanf_s("%s", ps->data[position].address, 9);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}