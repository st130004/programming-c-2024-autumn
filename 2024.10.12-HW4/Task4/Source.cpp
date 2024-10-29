#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int a[1000];
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		int yagodki = a[i] + a[(i - 1 + n) % n] + a[(i + 1) % n];
		if (yagodki > max)
		{
			max = yagodki;
		}
	}

	printf("%d", max);

	return 0;
}