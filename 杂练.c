#include<stdio.h>
int my_strlen(char* str)
{
	return (*str)?(1 + my_strlen(str + 1)):(0);
}
int my_strlen(char* str)
{
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
int my_strlen(char* str)
{
	char* eos = str;
	while (*eos++);
	return (eos - str - 1);
}

int Fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}

int Fac(int n)
{
	int sum = 1, i = 1;
	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	printf("%d", sum);
}

int Fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int jump(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	return jump(n - 1) + jump(n - 2);
}

int jump2(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	int a = 1;
	int b = 2;
	int c = 3;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	printf("%d", jump2(5));
}




