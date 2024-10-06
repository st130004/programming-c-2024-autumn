#include <cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int a = -1;
	int b = -1;

	for (int i = 1; i <= n; ++i)
	{
		int v = 0;
		int s = 0;
		scanf_s("%d", &v);
		scanf_s("%d", &s);

		if (s == 1)
		{
			if (v > a)
			{
				a = v;
				b = i;
			}
			else if (v == a)
			{
				if (b == -1 || i < b)
				{
					b = i;
				}
			}
		}
	}

	if (b == -1)
	{
		printf("-1");
	}
	else
	{
		printf("%d", b);
	}

	return 0;
}