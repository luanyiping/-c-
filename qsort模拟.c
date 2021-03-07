#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print_arr(int arr[], int sz)
{
	
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
// 冒泡排序
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
int main()
{
	int arr[10] = { 2,5,4,7,15,6,9,0,-2,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	print_arr(arr, sz);
}

// qsort 函数原型
//void qsort(void* base,
//		   size_t num,
//		   size_t width,
//	       int (*cmp) (const void* e1, const void* e2)
//	      );
 // 排序整形
int cmp(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);  // 升序排列 
}
void test1()
{
	int arr[10] = { 2,5,4,7,15,6,9,0,-2,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp);
	print_arr(arr, sz);
}

 // 排序结构体
struct stu
{
	char name[20];
	int age;
};
int cmp_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
void test2()
{
	struct stu arr[] = { {"张三",25},{"李四",20},{"王五",22} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_by_age);
}
int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name ,((struct stu*)e2)->name);
}
void test3()
{
	struct stu arr[] = { {"zhangsan",25},{"lisi",20},{"wangwu",22}};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_by_name);
}

int main()
{
	test1();
	test2();
	test3();
}

// 使用回调函数，模拟实现qsort(采用冒泡的方式)
int cmp(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);  // 升序排列 
}
void my_swap(char* bf1, char* bf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *bf1;
		*bf1 = *bf2;
		*bf2 = tmp;
		bf1++;
		bf2++;
	}
}
void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void* e1, const void* e2))
{
	 size_t i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				my_swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void test1()
{
	int arr[10] = { 2,5,4,7,15,6,9,0,-2,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
	print_arr(arr, sz);
}
int main()
{
	test1();
}
