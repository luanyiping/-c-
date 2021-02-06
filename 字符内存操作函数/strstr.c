#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* s1,const char* s2)
{
	assert(s1 && s2);
	if(*s2 == '\0')
	{
		return (char*)s1;
	}
	const char* cp = s1;
	while (*cp)
	{
		const char* p1 = cp;
		const char* p2 = s2;
		while ((*p1) && (*p2) && (*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (char*)cp;
		cp++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abbbcde";
	char arr2[] = "bbc";
	char* ret = my_strstr(arr1, arr2);
	if (ret != NULL)
	{
		printf("%s\n", ret);
	}
}
