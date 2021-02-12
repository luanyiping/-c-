#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{

	char arr1[] = "luanyiping@33492586487.com";

	char arr2[30] = { 0 };
	strcpy(arr2, arr1);
	char* p = "@.";
	char* ret = NULL;
	for (ret = strtok(arr2, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
}


// char* strtok(char* str, const char* sep);


//第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。

// strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。（注：strtok函数会改
// 变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。）

// strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。

// strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。

// 如果字符串中不存在更多的标记，则返回 NULL 指针。
