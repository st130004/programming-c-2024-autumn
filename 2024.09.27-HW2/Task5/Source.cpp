#include <cstdio>

int main(int argc, char* argv[])
{
	int l1 = 0;
	int w1 = 0;
	int h1 = 0;
	int l2 = 0;
	int w2 = 0;
	int h2 = 0;
	int lc = 0;
	int wc = 0;
	int hc = 0;


	scanf("%d", &l1);
	scanf("%d", &w1);
	scanf("%d", &h1);
	if (l1 < w1)
	{
		int t = l1; l1 = w1; w1 = t;
	}

	scanf("%d", &l2);
	scanf("%d", &w2);
	scanf("%d", &h2);
	if (l2 < w2)
	{
		int t = l2; l2 = w2; w2 = t;
	}

	scanf("%d", &lc);
	scanf("%d", &wc);
	scanf("%d", &hc);
	if (lc < wc)
	{
		int t = lc; lc = wc; wc = t;
	}

	if (h1 + h2 <= hc && l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc)
	{
		printf("YES");
	}
	else if (l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc && h1 <= hc && h2 <= hc)
	{
		if (l1 <= lc && w1 <= wc)
		{
			if ((l2 <= wc - w1 && w2 <= lc) || (w2 <= wc - w1 && l2 <= lc) ||
				(l2 <= lc - l1 && w2 <= wc) || (w2 <= lc - l1 && l2 <= wc))
			{
				printf("YES");
			}
			else if (w1 <= lc && l1 <= wc)
			{
				if ((l2 <= wc - l1 && w2 <= lc) || (l2 <= lc && w2 <= wc - l1) ||
					(l2 <= lc - w1 && w2 <= wc) || (w2 <= lc - w1 && l2 <= wc))
				{
					printf("YES");
				}
				else
				{
					printf("NO");
				}
			}
			else
			{
				printf("NO");
			}
		}
		else
		{
			printf("NO");
		}
	}
	else
	{
		printf("NO");
	}

	return 0;
}