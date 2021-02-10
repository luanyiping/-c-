#include"SeqList.h"
// ��ʼ������
void SeqListInit(SL* ps)
{
	assert(ps);
	ps->arr = (SLDataType*)malloc(sizeof(SLDataType)* 4);
	if (ps->arr == NULL)
	{
		printf("����ռ�ʧ��\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capicity = 4;
}
// ��ӡ����
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
// ���ռ䣬��������
void CheckCapicity(SL* ps)
{
	assert(ps);
	if (ps->size >= ps->capicity)
	{
		ps->capicity *= 2;
		ps->arr = (SLDataType*)realloc(ps->arr, sizeof(SLDataType) * ps->capicity);
		if (ps->arr == NULL)
		{
			printf("����ʧ��\n");
			exit(-1);
		}
	}
}
// β��
void SeqListPushBack(SL* ps,int x)
{
	assert(ps);
	CheckCapicity(ps);
	ps->arr[ps->size] = x;
	ps->size++;
}

// βɾ
void SeqListPopBack(SL* ps)
{
	ps->size--;
}

// ͷ��
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
// ͷɾ
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








