#include<stdio.h>
#include<string.h>
int main()
{

	char arr[10] = { 0 };
	memset(arr, '*', 10);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%c ",arr[i]);
	}
}

