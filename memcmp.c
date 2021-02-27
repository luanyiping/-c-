#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[] = { 1,3,3,4,5 };
	int arr2[] = { 1,2,3,4,5 };
	int ret = memcmp(arr1, arr2, 5);
	
	printf("%d\n", ret);
}

