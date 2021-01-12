#include<stdio.h>
char* my_strncpy(char* dest, const char* src,size_t count)
{
	char* start = dest;
	while (count && (*dest++ = *src++))
	{
		count--;
	}
	if (count)
	{
		while (--count)
		{
			*dest++ = '\0';
		}
	}
	return start;
}
int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";
	my_strncpy(arr1, arr2, 6);
	printf("%s\n", arr1);
}