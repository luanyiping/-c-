#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***************************\n");
	printf("          1.������         \n");
	printf("          0.�˳�           \n");
	printf("***************************\n");
}
void game()
{
	int ret = rand()%100 + 1;
	int guess = 0;
	while (1)
	{
		printf("����������:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
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
		printf("������ѡ��:");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		}
	} while (select);
}