#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	double a = 0;
	double b = 0;
	double c = 0;
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	scanf_s("%lf", &c);

	if (a == 0)
	{
		if (b == 0 && c == 0)
		{
			printf("-1\n");
		}
		else if (b == 0 && c != 0)
		{
			printf("0\n");
		}
		else
		{
			printf("1\n%lf", -c / b);
		}
	}
	else
	{
		double d = b * b - 4 * a * c;
		if (d > 0)
		{
			double x1 = (-b + sqrt(d)) / (2 * a);
			double x2 = (-b - sqrt(d)) / (2 * a);
			printf("2\n");
			printf("%f\n%f", x1 < x2 ? x1 : x2, x1 < x2 ? x2 : x1);
		}
		else if (d == 0)
		{
			double x = -(double)b / (2 * a);
			printf("1\n");
			printf("%f", x);
		}
		else
		{
			printf("0\n");
		}
	}

	return 0;
}