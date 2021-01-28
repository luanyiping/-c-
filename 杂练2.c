#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	//  1.
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//
//	/*  2.
//	const char* eos = str;
//	while (*str++);
//	return (str - eos - 1);
//
//	 3.
//	return (*str) ? (1 + my_strlen(str + 1)) : (0);
//	*/
//}


//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* start = dest;
//	while (*dest++ = *src++);
//	return start;
//}
//int main()
//{
//	char arr1[10] = "dddhhh";
//	char arr2[5] = "abc";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
// }


//void Adjust_order(int* arr,int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			int tmp = arr[j];
//			arr[j] = arr[i];
//			arr[i] = tmp;
//			j++;
//		}
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Adjust_order(arr,sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//}

int main()
{
    int i = 0;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("hello\n");
    }
    return 0;
}
