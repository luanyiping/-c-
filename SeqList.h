#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* arr;  // 指向数组的指针
	size_t size;      // 数组有效数据的大小
	size_t capicity;  // 数组的容量
}SL;

// 初始化数组
void SeqListInit(SL* ps);
// 打印数组
void print(SL* ps);
// 尾插
void SeqListPushBack(SL* ps,int x);
// 尾删
void SeqListPopBack(SL* ps);
// 头插
void SeqListPushFront(SL* ps, int x);
// 头删
void SeqListPopFront(SL* ps);
// 
