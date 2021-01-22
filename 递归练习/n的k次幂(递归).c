int my_pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else
	{
		return n * my_pow(n, k - 1);
	}
}
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d", my_pow(n, k));
}
