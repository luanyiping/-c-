#include<stdio.h>
#include<time.h>
#include"game.h"
void menu()
{
	printf("*********************************\n");
	printf("***********1 .play **************\n");
	printf("***********0 .exit **************\n");
	printf("*********************************\n");
}
void game()
{
	// �������̶�Ӧ������
	char mine[ROWS][COLS]; // ��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS]; // ����ų������׵���Ϣ
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	// ��ӡ������
	DisplayBoard(show, ROW, COL);
	// ������
	SetMine(mine,ROW,COL,EASY_COUNT);

	// �Ų���
	FindMine(mine,show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("������ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
}