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
	// 创建棋盘对应的数组
	char mine[ROWS][COLS]; // 存放布置好的雷的信息
	char show[ROWS][COLS]; // 存放排除出的雷的信息
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	// 打印出棋盘
	DisplayBoard(show, ROW, COL);
	// 布置雷
	SetMine(mine,ROW,COL,EASY_COUNT);

	// 排查雷
	FindMine(mine,show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请输入选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
}