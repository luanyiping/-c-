#include"SeqList.h"
// 初始化数组
void SeqListInit(SL* ps)
{
	assert(ps);
	ps->arr = (SLDataType*)malloc(sizeof(SLDataType)* 4);
	if (ps->arr == NULL)
	{
		printf("分配空间失败\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capicity = 4;
}
// 打印数组
void print(SL* ps)
{
	assert(ps);
	unsigned int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}
// 检查空间，进行扩容
void CheckCapicity(SL* ps)
{
	assert(ps);
	if (ps->size >= ps->capicity)
	{
		ps->capicity *= 2;
		ps->arr = (SLDataType*)realloc(ps->arr, sizeof(SLDataType) * ps->capicity);
		if (ps->arr == NULL)
		{
			printf("扩容失败\n");
			exit(-1);
		}
	}
}
// 尾插
void SeqListPushBack(SL* ps,int x)
{
	assert(ps);
	CheckCapicity(ps);
	ps->arr[ps->size] = x;
	ps->size++;
}

// 尾删
void SeqListPopBack(SL* ps)
{
	ps->size--;
}

// 头插
void SeqListPushFront(SL* ps, int x)
{
	assert(ps);
	CheckCapicity(ps);
	int i = 0;
	for (i = ps->size - 1; i >= 0; i--)
	{
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->arr[0] = x;
	ps->size++;
}
// 头删
void SeqListPopFront(SL* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}








