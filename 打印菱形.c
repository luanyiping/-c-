#include<stdio.h>
int main()
{
	int i = 0, j = 0, k = 0;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 12 - 2 * i; j++)
		{
			printf(" ");
		}
		for (k = 0;k < 2 * i + 1; k++)
		{
			printf("* ");
		}
		for (j = 0; j < 12 - 2 * i; j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	for (i = 1; i <= 6; i++)
	{
		for (j = 0; j < 2 * i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 11 - 2 * (i - 1); k++)
		{
			printf("* ");
		}
		for (j = 0; j < 2 * i; j++)
		{
			printf(" ");
		}
		printf("\n");
	}
}