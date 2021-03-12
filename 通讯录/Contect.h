#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#define NAME_MAX 10
#define SEX_MAX 5
#define TEL_MAX 20
#define ADDR_MAX 20
#define PEO_INIT 3
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct PeopleInfor
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}PeoInfor;
struct Contect
{
	PeoInfor* data;
	int size;
	int capacity;
};
void ContestInit(struct Contect* pc);
void ContectAdd(struct Contect* pc);
void ContectShow(struct Contect* pc);
void ContectDelete(struct Contect* pc);
void ContectSearch(struct Contect* pc);
void ContectModity(struct Contect* pc);
void ContectEmpty(struct Contect* pc);
void ContectSort(struct Contect* pc);
int FindPeople(struct Contect* pc);
