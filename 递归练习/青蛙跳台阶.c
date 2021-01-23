// 一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶的跳法
int jump(int n)
{
	if (n == 0 || n == 1 || n == 2)
		return n;
	else
	{
		return jump(n - 1) + jump(n - 2);
	}
}

int jump(int n)
{
	if (n == 0 || n == 1 || n == 2)
	{
		return n;
	}
	int a = 1;
	int b = 2;
	int c = 3;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

// 一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上n级台阶的跳法
int jump(int m, int n)
{
	if (n > m)
	{
		return 2 * jump(m, n - 1) - jump(m, n - m - 1);
	}
	// n <= m时跟问题二的解法相同
	else
	{
		if (n == 0 || n == 1 || n == 2)
		{
			return n;
		}
		else
		{
			return 2 * jump(m, n - 1);
		}
	}
}

// 一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上m级。求该青蛙求该青蛙跳上n级台阶的跳法

int jump(int m, int n)
{
	if (n > m)
	{
		return 2 * jump(m, n - 1) - jump(m, n - m - 1);
	}
	// n <= m时跟问题二的解法相同
	else
	{
		if (n == 0 || n == 1 || n == 2)
		{
			return n;
		}
		else
		{
			return 2 * jump(m, n - 1);
		}
	}
}

