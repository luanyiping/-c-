#include<stdio.h>
#include<string.h>
#include<assert.h>

void* my_memcpy(void* dest, void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);
	while (count--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
void test1()
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[20] = { 0 };
	my_memcpy(arr2, arr1, 16);
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d ", arr2[i]);
	}
}
int main()
{
	 test1();
}

