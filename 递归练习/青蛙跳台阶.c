// һֻ����һ�ο�������1��̨�ף�Ҳ��������2���������������һ��n����̨�׵�����
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

// һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n���������������n��̨�׵�����
int jump(int m, int n)
{
	if (n > m)
	{
		return 2 * jump(m, n - 1) - jump(m, n - m - 1);
	}
	// n <= mʱ��������Ľⷨ��ͬ
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

// һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������m����������������������n��̨�׵�����

int jump(int m, int n)
{
	if (n > m)
	{
		return 2 * jump(m, n - 1) - jump(m, n - m - 1);
	}
	// n <= mʱ��������Ľⷨ��ͬ
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

