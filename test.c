#include"SeqList.h"
int main()
{
	SL s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPopBack(&s);
	print(&s);
	SeqListPushFront(&s, -1);
	print(&s);
	SeqListPopFront(&s);
	print(&s);
}