#include<stdio.h>
// 确认失败
//int main()
//{
//	char password[10] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//}

// 成功案例
int main()
{
	char password[20];
	printf("请输入密码:");
	scanf("%s",password);
	printf("请确认密码:(Y/N):");
	int ch = 0;
	ch = getchar();
	while ((ch = getchar()) != '\n'); // 使用gets需要将该行去掉，因为gets将\n作为结束标志，并将其转换成'\0',会吃回车
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
}