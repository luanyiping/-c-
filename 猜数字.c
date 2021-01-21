#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***************************\n");
	printf("          1.猜数字         \n");
	printf("          0.退出           \n");
	printf("***************************\n");
}
void game()
{
	int ret = rand()%100 + 1;
	int guess = 0;
	while (1)
	{
		printf("请输入数字:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int select = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请输入选择:");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		}
	} while (select);
}