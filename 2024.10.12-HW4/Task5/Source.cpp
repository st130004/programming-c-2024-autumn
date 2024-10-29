#include<cstdio>
#include<cmath>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int a[1000];
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	int x = 0;
	scanf_s("%d", &x);

	int blizniy = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (abs(a[i] - x) < abs(blizniy - x) || (abs(a[i] - x) == abs(blizniy - x) && a[i] < blizniy))
		{
			blizniy = a[i];
		}
	}

	printf("%d", blizniy);
	return 0;
}