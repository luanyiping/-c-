#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++);
	return ret;
}
int main()
{
	char arr1[20] = "hello ";
	
	char arr2[] = "world";
	printf("%s\n", my_strcat(arr1, arr2));
}
