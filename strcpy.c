#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>

char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest++ = *src++);
	return ret;
}
int main()
{

	char arr1[20] = "abcdef";
	char arr2[] = "lkj";
	printf("%s\n", strcpy(arr1, arr2));
}
