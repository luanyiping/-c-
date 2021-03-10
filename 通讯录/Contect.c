#include"Contect.h"
void ContestInit(struct Contect* pc)
{
	memset(pc->data, 0, sizeof(pc->data));
	pc->size = 0;
}
void ContectAdd(struct Contect* pc)
{
	if (pc->size == PEOPLE_MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("��������ϵ�˵�����:");
		scanf("%s", pc->data[pc->size].name);
		printf("��������ϵ�˵��Ա�:");
		scanf("%s", pc->data[pc->size].sex);
		printf("��������ϵ�˵�����:");
		scanf("%d", &pc->data[pc->size].age);
		printf("��������ϵ�˵ĵ绰:");
		scanf("%s", pc->data[pc->size].tel);
		printf("��������ϵ�˵�סַ:");
		scanf("%s", pc->data[pc->size].addr);
		pc->size++;
		printf("��ӳɹ�\n\n");
	}
}
void ContectShow(struct Contect* pc)
{
	if (pc->size == 0)
	{
		printf("ͨѶ¼��û����ϵ��\n");
	}
	else
	{
		printf("%s\t%s\t%s\t%-15s\t%-15s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		int i = 0;
		for (i = 0; i < pc->size; i++)
		{
			printf("%s\t", pc->data[i].name);
			printf("%s\t", pc->data[i].sex);
			printf("%d\t", pc->data[i].age);
			printf("%-15s\t", pc->data[i].tel);
			printf("%-15s\t", pc->data[i].addr);
			printf("\n");
		}
		printf("\n");

	}
}
void ContectDelete(struct Contect* pc)
{
	if (pc->size == 0)
	{
		printf("ͨѶ¼��Ϊ��\n\n");
	}
	else
	{
		printf("������Ҫɾ���˵����� :");
		int pos = FindPeople(pc);
		if (pos == -1)
		{
			printf("ͨѶ¼���޴���\n\n");
		}
		else
		{
			int j = pos;
			for (; j < pc->size - 1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->size--;
			printf("ɾ���ɹ�\n\n");
		}
	}
}
void ContectSearch(struct Contect* pc)
{
	if (pc->size == 0)
	{
		printf("ͨѶ¼��Ϊ��\n\n");
	}
	else
	{
		printf("������Ҫ�����˵����� :");
		int pos = FindPeople(pc);
		if (pos == -1)
		{
			printf("ͨѶ¼���޴���\n\n");
		}
		else
		{
			printf("�ɹ��ҵ�\n\n");
			printf("%s\t%s\t%s\t%-15s\t%-15s\n", "����", "�Ա�", "����", "�绰", "��ַ");
			printf("%s\t", pc->data[pos].name);
			printf("%s\t", pc->data[pos].sex);
			printf("%d\t", pc->data[pos].age);
			printf("%-15s\t", pc->data[pos].tel);
			printf("%-15s\t", pc->data[pos].addr);
			printf("\n\n");
		}
	}
}
void ContectModity(struct Contect* pc)
{
	if (pc->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n\n");
	}
	else
	{
		printf("������Ҫ�޸��˵����� :");
		int pos = FindPeople(pc);
		if (pos == -1)
		{
			printf("ͨѶ¼���޴���\n\n");
		}
		else
		{
			printf("�������޸ĺ������:");
			scanf("%s", pc->data[pos].name);
			printf("�������޸ĺ���Ա�:");
			scanf("%s", pc->data[pos].sex);
			printf("�������޸ĺ������:");
			scanf("%d", &pc->data[pos].age);
			printf("�������޸ĺ�ĵ绰:");
			scanf("%s", pc->data[pos].tel);
			printf("�������޸ĺ��סַ:");
			scanf("%s", pc->data[pos].addr);
			printf("\n�޸ĳɹ�\n\n");
		}
	}
}
void ContectEmpty(struct Contect* pc)
{
	pc->size = 0;
	printf("����ɹ�\n\n");
}
int cmp_by_name(const void* elem1, const void* elem2)
{
	return strcmp(((struct PeopleInfor*)elem1)->name, ((struct PeopleInfor*)elem2)->name);
}
void ContectSort(struct Contect* pc)
{
	qsort(pc->data, pc->size, sizeof(pc->data[0]), cmp_by_name);
	printf("����ɹ�\n\n");
	ContectShow(pc);
}

