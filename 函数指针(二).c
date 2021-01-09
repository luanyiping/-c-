#include<stdio.h>
int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int(*pa)(int, int) = add;
	printf("%d\n", pa(2, 3));
	printf("%d\n", (*pa)(2, 3));

}