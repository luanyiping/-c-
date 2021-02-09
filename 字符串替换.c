#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
// 要求写一个函数，将字符串中的空格替换成 %20 
// 样例: 如下
//char* replace(char* arr)
//{
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] == ' ')
//		{
//			int j = len;
//			for (j = len; j >= i + 1; j--)
//			{
//				arr[j + 2] = arr[j];
//			}
//			arr[i] = '%';
//			arr[i + 1] = '2';
//			arr[i + 2] = '0';
//			i += 2;
//			len += 2;
//		}
//	}
//	return arr;
//}

// 
char* replace(char* arr)    // 要求写一个函数，将字符串中的空格替换成 %20 ，样例: "abc defgx yz" 转换成 "abc%20defgx%20yz"
{
	int len = strlen(arr);
	int i = 0,count = 0;
	for (i = 0; i < len; i++)
	{
		if (arr[i] == ' ')
		{
			count++;
		}
	}
	char* p1 = arr + len;
	char* p2 = arr + len + 2 * count;
	while (p1 != p2)
	{
		if ((*p1) != ' ')
		{
			*p2 = *p1;
			p1--;
			p2--;
		}
		else if((*p1) == ' ')
		{
			*p2 = '0';
			*(p2 - 1) = '2';
			*(p2 - 2) = '%';
			p2 -= 3;
		}
	}
	return arr;
}
int main()
{	char arr[100] = "abc defgx yz";
	printf("%s\n",replace(arr));
}
