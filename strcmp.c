#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcq";
	if (my_strcmp(arr1, arr2) > 0)
	{
		printf("arr1 > arr2\n");
	}
	else if (my_strcmp(arr1, arr2) < 0)
	{
		printf("arr1 < arr2\n");
	}
	else
	{
		printf("arr1 == arr2\n");
	}
}