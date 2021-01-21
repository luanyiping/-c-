#include<stdio.h>
#include<math.h>
// 判断素数三种方法(打印100到200的素数)
// 一.
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int flag = 0;
//		int j = 3;
//		for (j = 3; j <= sqrt(i); j += 2)
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//}


//// 二.
//int is_prime(int i)
//{
//	int j = 3;
//	for (j = 3; j <= sqrt(i); j += 2)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//}
	