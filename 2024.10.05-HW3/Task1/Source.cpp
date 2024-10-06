#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int a = 0;
	int b = 0;

	for (int i = 0; i < n; ++i)
	{
		int c = 0;
		scanf_s("%d", &c);
		if (c == 0)
		{
			++a;
		}
		else
		{
			++b;
		}
	}
	if (a > b)
	{
		printf("%d", b);
	}
	else
	{
		printf("%d", a);
	}

	return 0;
}