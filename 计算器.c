#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("**************************\n");
	printf("****1. add  2.sub*********\n");
	printf("****3. mul  4.div*********\n");
	printf("****     0.exit  *********\n");
	printf("**************************\n");
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x *  y;
}
int div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int (*parr[])(int, int) = { 0,add,sub,mul,div };
	do
	{
		menu();
		printf("请输入选择:");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数:");
			int x = 0, y = 0;
			scanf("%d %d", &x, &y);
			int ret = parr[input](x, y);
			printf("%d\n", ret);
			system("pause");
			system("cls");
		}
		else if (input == 0)
		{
			printf("退出游戏\n");
			break;
		}
		else
		{
			printf("选择错误\n");
			system("pause");
			system("cls");
		}
	} while (input);
}


// 回调函数
#include<stdio.h>
void test1()
{
	printf("hehe\n");
}
void test2(void (*p)())
{
	p();
}
int main()
{
	test2(test1);
}

// 回调函数版计算器
#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("**************************\n");
	printf("****1. add  2.sub*********\n");
	printf("****3. mul  4.div*********\n");
	printf("****     0.exit  *********\n");
	printf("**************************\n");
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void calc(int(*p)(int, int))
{
	printf("请输入两个操作数:");
	int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	printf("%d\n", p(x, y));
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(add);
			break;
		case 2:
			calc(sub);
			break;
		case 3:
			calc(mul);
			break;
		case 4:
			calc(div);
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
		system("pause");
		system("cls");
	} while (input);
}


