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

	int m = 0;
	scanf_s("%d", &m);
	for (int d = 0; d < m; ++d)
	{
		int i = 0;
		int j = 0;
		scanf_s("%d", &i);
		scanf_s("%d", &j);
		for (int x = i - 1; x < j; ++x)
		{
			printf("%d", a[x]);
			if (x < j - 1)
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}