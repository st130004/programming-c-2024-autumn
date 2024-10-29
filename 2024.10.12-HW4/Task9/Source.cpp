#include <cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf("%d", &n);

	int h[100];
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &h[i]);
	}

	int x = 0;
	scanf_s("%d", &x);

	int mesto = 1;

	for (int i = 0; i < n; ++i)
	{
		if (h[i] >= x)
		{
			++mesto;
		}
	}

	printf("%d\n", mesto);

	return 0;
}