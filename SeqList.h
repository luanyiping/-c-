#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* arr;  // ָ�������ָ��
	size_t size;      // ������Ч���ݵĴ�С
	size_t capicity;  // ���������
}SL;

// ��ʼ������
void SeqListInit(SL* ps);
// ��ӡ����
void print(SL* ps);
// β��
void SeqListPushBack(SL* ps,int x);
// βɾ
void SeqListPopBack(SL* ps);
// ͷ��
void SeqListPushFront(SL* ps, int x);
// ͷɾ
void SeqListPopFront(SL* ps);
// 
