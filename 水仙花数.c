#include<stdio.h>
#include<math.h>
int main()
{
	int arr[10] = { 0 };
	int j = 0;
	for (j = 0; j <= 100000; j++)
	{
		int m = j;
		int i = 0;
		int count = 0;
		while (m)
		{
			arr[i] = m % 10;
			m /= 10;
			i++;
			count++;
		}
		int sum = 0;
		for (i--; i >= 0; i--)
		{
			sum += pow(arr[i], count);
		}
		if (sum == j)
			printf("%d ", j);
	}

}
