#include<cstdio>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);

	if (a == c || b == d || ((a - c) == (b - d)) || (c - a) == ((b - d)) || ((a - c) == (d - b)) || (c - a) == (d - b))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}