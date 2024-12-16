#include <iostream>

void bubbleSort(int* arr, int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - i - 1; ++j) 
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
}

int main() {
	int n = 0;
	int m = 0;

	scanf_s("%d %d", &n, &m);

	int* first_set = new int[n];
	int* second_set = new int[m];

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &*(first_set + i));
	}

	for (int i = 0; i < m; ++i)
	{
		scanf_s("%d", &*(second_set + i));
	}

	bubbleSort(first_set, n);
	bubbleSort(second_set, m);

	int i = 0;
	int j = 0;
	int prev = -1;  

	while (i < n && j < m)
	{
		if (*(first_set + i) == *(second_set + j))
		{
			if (*(first_set + i) != prev)
			{
				printf("%d ", *(first_set + i));
				prev = *(first_set + i);
			}
			++i;
			++j;
		}
		else if (*(first_set + i) < *(second_set + j)) 
		{
			++i;
		}
		else 
		{
			++j;
		}
	}

	return 0;
}