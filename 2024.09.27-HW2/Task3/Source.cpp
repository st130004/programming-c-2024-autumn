#include<cstdio>
#include<math.h>

int main(int argc, char* argv[])
{
	int x = 0;
	int y = 0;
	int r = 0;
	int x1 = 0;
	int y1 = 0;
	int r1 = 0;
	double d = 0;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &r);
	scanf_s("%d", &x1);
	scanf_s("%d", &y1);
	scanf_s("%d", &r1);
	d = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));

	if (d > (r + r1) || d < abs(r - r1))
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	return 0;
}