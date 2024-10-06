#include <cstdio> 

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int k = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int r = 0;
			scanf_s("%d", &r);
			if (r == 1 && i < j)
			{
				++k;
			}
		}
	}

	printf("%d", k);

	return 0;
}