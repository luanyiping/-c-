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
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入联系人的姓名:");
		scanf("%s", pc->data[pc->size].name);
		printf("请输入联系人的性别:");
		scanf("%s", pc->data[pc->size].sex);
		printf("请输入联系人的年龄:");
		scanf("%d", &pc->data[pc->size].age);
		printf("请输入联系人的电话:");
		scanf("%s", pc->data[pc->size].tel);
		printf("请输入联系人的住址:");
		scanf("%s", pc->data[pc->size].addr);
		pc->size++;
		printf("添加成功\n\n");
	}
}
void ContectShow(struct Contect* pc)
{
	if (pc->size == 0)
	{
		printf("通讯录里没有联系人\n");
	}
	else
	{
		printf("%s\t%s\t%s\t%-15s\t%-15s\n", "姓名", "性别", "年龄", "电话", "地址");
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
		printf("通讯录中为空\n\n");
	}
	else
	{
		printf("请输入要删除人的姓名 :");
		int pos = FindPeople(pc);
		if (pos == -1)
		{
			printf("通讯录中无此人\n\n");
		}
		else
		{
			int j = pos;
			for (; j < pc->size - 1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->size--;
			printf("删除成功\n\n");
		}
	}
}
void ContectSearch(struct Contect* pc)
{
	if (pc->size == 0)
	{
		printf("通讯录中为空\n\n");
	}
	else
	{
		printf("请输入要查找人的姓名 :");
		int pos = FindPeople(pc);
		if (pos == -1)
		{
			printf("通讯录中无此人\n\n");
		}
		else
		{
			printf("成功找到\n\n");
			printf("%s\t%s\t%s\t%-15s\t%-15s\n", "姓名", "性别", "年龄", "电话", "地址");
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
		printf("通讯录为空\n\n");
	}
	else
	{
		printf("请输入要修改人的姓名 :");
		int pos = FindPeople(pc);
		if (pos == -1)
		{
			printf("通讯录中无此人\n\n");
		}
		else
		{
			printf("请输入修改后的姓名:");
			scanf("%s", pc->data[pos].name);
			printf("请输入修改后的性别:");
			scanf("%s", pc->data[pos].sex);
			printf("请输入修改后的年龄:");
			scanf("%d", &pc->data[pos].age);
			printf("请输入修改后的电话:");
			scanf("%s", pc->data[pos].tel);
			printf("请输入修改后的住址:");
			scanf("%s", pc->data[pos].addr);
			printf("\n修改成功\n\n");
		}
	}
}
void ContectEmpty(struct Contect* pc)
{
	pc->size = 0;
	printf("清除成功\n\n");
}
int cmp_by_name(const void* elem1, const void* elem2)
{
	return strcmp(((struct PeopleInfor*)elem1)->name, ((struct PeopleInfor*)elem2)->name);
}
void ContectSort(struct Contect* pc)
{
	qsort(pc->data, pc->size, sizeof(pc->data[0]), cmp_by_name);
	printf("排序成功\n\n");
	ContectShow(pc);
}

