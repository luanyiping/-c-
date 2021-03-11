#pragma once
#define NAME_MAX 10
#define SEX_MAX 5
#define TEL_MAX 20
#define ADDR_MAX 20
#define PEOPLE_MAX 1000
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct PeopleInfor
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
};
struct Contect
{
	struct PeopleInfor data[PEOPLE_MAX];
	int size;
};
void ContestInit(struct Contect* pc);
void ContectAdd(struct Contect* pc);
void ContectShow(struct Contect* pc);
void ContectDelete(struct Contect* pc);
void ContectSearch(struct Contect* pc);
void ContectModity(struct Contect* pc);
void ContectEmpty(struct Contect* pc);
void ContectSort(struct Contect* pc);
