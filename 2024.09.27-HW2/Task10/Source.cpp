#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int coins_5 = 0;
	int coins_3 = 0;

	for (coins_5 = n / 5; coins_5 >= 0; --coins_5)
	{
		int remaining = n - coins_5 * 5;
		if (remaining % 3 == 0)
		{
			coins_3 = remaining / 3;
			break;
		}
	}

	printf("%d %d\n", coins_5, coins_3);

	return 0;
}