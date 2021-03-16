#include"Contect.h"
void ContestInit(struct Contect* pc)
{
	pc->data = (PeoInfor*)malloc(sizeof(PeoInfor) * PEO_INIT);
	if (pc->data == NULL)
	{
		printf("分配内存失败\n");
		exit(-1);
	}
	pc->size = 0;
	pc->capacity = PEO_INIT;

	// 加载信息
	LoadContect(pc);
}
void LoadContect(struct Contect* pc)
{
	FILE* pf = fopen("data.txt", "rb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	PeoInfor tmp = { 0 };
	while (fread(&tmp, sizeof(pc->data[0]), 1, pf))
	{
		// 检查容量
		CheckCapacity(pc);
		pc->data[pc->size] = tmp;
		pc->size++;
	}
	fclose(pf);
	pf = NULL;
}
void CheckCapacity(struct Contect* pc)
{
	if (pc->size == pc->capacity)
	{
		PeoInfor* ptr = (PeoInfor*)realloc(pc->data, sizeof(PeoInfor) * (pc->capacity + 2));
		if (ptr == NULL)
		{
			printf("增容失败\n");
			exit(-1);
		}
		pc->data = ptr;
		pc->capacity += 2;
		printf("增容成功\n\n");
	}
}
void ContectAdd(struct Contect* pc)
{
	if (pc->data == NULL)
	{
		ContestInit(pc);
	}
	CheckCapacity(pc);
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
	free(pc->data);
	pc->data = NULL;
	pc->size = 0;
	pc->capacity = 0;
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
void ContectSave(struct Contect* pc)
{
	FILE* pf = fopen("data.txt", "wb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < pc->size; i++)
	{
		fwrite(&(pc->data[i]), sizeof(pc->data[0]), 1, pf);
	}
	fclose(pf);
	pf = NULL;
	printf("保存成功\n");
}
