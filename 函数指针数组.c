#include<stdio.h>
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
int main()
{
	int(*pa[4])(int, int) = { add,sub,mul,div };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d ", pa[i](2, 3));
		printf("%d ", (*pa[i])(2, 3));
	}

}