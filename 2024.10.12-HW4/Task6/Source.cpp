#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int v[100];
	int p[100];

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &v[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &p[i]);
	}

	int max_firm_index = 0;
	double max_tax = 0;

	for (int i = 0; i < n; ++i)
	{

		double tax = v[i] * (p[i] / 100.0);
		if (tax > max_tax || (tax == max_tax && i < max_firm_index))
		{
			max_tax = tax;
			max_firm_index = i;
		}
	}

	printf("%d", max_firm_index + 1);

	return 0;
}