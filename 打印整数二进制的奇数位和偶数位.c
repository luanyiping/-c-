#include<stdio.h>
int main()
{
	int m = 0;
	scanf("%d", &m);
	//11
	//00000000000000000000000000001011
	int i = 0;
	//����λ
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	//ż��λ
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	return 0;
}


