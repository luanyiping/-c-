int DigitSum(n)
{
	if (n)
	{
		return n % 10 + DigitSum(n / 10);
	}
	return 0;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", DigitSum(n));
}