#pragma warning (disable:)
#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
		int i;
		int* pn = (int*)malloc(5 * sizeof(int));
		printf("%p\n", pn);
		for (i = 0; i < 5; i++)
			pn[i] = i + 1;

		printf("%d\n", sizeof(int));
		int* pnn = (int*)realloc(pn, N * sizeof(int));
		printf("%p\n", pnn);
		for (i = 0; i < 5; i++)
			printf("%3d", pnn[i]);

		//for(i=0;i<5;i++)
		//printf("%3d",pn[i]);
		printf("\n");
		//free(pn);
		free(pnn);
		return 0;
}
//
