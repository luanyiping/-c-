// �ַ�������

// ʵ��һ�����������������ַ����е�k���ַ���

// ABCD����һ���ַ��õ�BCDA

// ABCD���������ַ��õ�CDAB

//  һ.low���㷨(�������)
#include<stdio.h>
#include<string.h>
#include<assert.h>
void  rotate_string(char* arr, int k)
{
	assert(arr);
	int i = 0;
	int len = strlen(arr);
	// ����k���ַ�
	for (i = 0; i < k; i++)
	{
		char tmp = *arr;
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = tmp;
	}
}

 // ��.������ת��
 // ab cdef 
 // ba fedc �ֱ�����
 // cdfeba  ����������
void reverse_string(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void rotate_string(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse_string(arr, arr + k - 1);
	reverse_string(arr + k,arr + len - 1);
	reverse_string(arr, arr + len - 1);
}
int main()
{
	char arr[] = "abcdef";
	int k = 0;
	scanf("%d", &k);
	rotate_string(arr, k);
	printf("%s\n", arr);
}


// �ַ�����ת���

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����

// ���磺����s1 = AABCD��s2 = BCDAA������1

// ����s1 = abcd��s2 = ACBD������0.

// AABCD����һ���ַ��õ�ABCDA

// AABCD���������ַ��õ�BCDAA

// AABCD����һ���ַ��õ�DAABC

#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse_string(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void rotate_string(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse_string(arr, arr + k - 1);
	reverse_string(arr + k,arr + len - 1);
	reverse_string(arr, arr + len - 1);
}
int is_rotate_string(char* str1, char* str2)
{
	int len = strlen(str1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		rotate_string(str1, 1);
		if (strcmp(str1, str2) == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "fabcde";
	if (is_rotate_string(arr1, arr2) == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
}


//���Ͼ���

//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�

// Ҫ��ʱ�临�Ӷ�С��O(N);
//  1 2 3
//  4 5 6
//  7 8 9
#include<stdio.h>
int FindNum(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int k = 0;
	scanf("%d", &k);
	int x = 3;
	int y = 3;
	if (FindNum(arr, k, &x, &y) == 1)
	{
		printf("�ҵ���\n");
		printf("�±�Ϊ : %d %d", x, y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
}

