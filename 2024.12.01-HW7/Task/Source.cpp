#include<cstdio>
#include <cstdlib>

void printArray(int* arr, int size)
{
	printf("current array: ");
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int* addToEnd(int* arr, int& size, int newValue)
{
	int* newArr = (int*)malloc((size + 1) * sizeof(int));
	for (int i = 0; i < size; ++i)
	{
		newArr[i] = arr[i];
	}
	newArr[size] = newValue;
	free(arr);
	++size;
	return newArr;
}

int* addToBegin(int* arr, int& size, int newValue)
{
	int* newArr = (int*)malloc((size + 1) * sizeof(int));
	newArr[0] = newValue;
	for (int i = 0; i < size; ++i)
	{
		newArr[i + 1] = arr[i];
	}
	free(arr);
	++size;
	return newArr;
}

int* removeFromEnd(int* arr, int& size)
{
	if (size == 0) return arr;
	int* newArr = (int*)malloc((size - 1) * sizeof(int));
	for (int i = 0; i < size - 1; ++i)
	{
		newArr[i] = arr[i];
	}
	free(arr);
	--size;
	return newArr;
}

int* removeFromBegin(int* arr, int& size)
{
	if (size == 0) return arr;
	int* newArr = (int*)malloc((size - 1) * sizeof(int));
	for (int i = 1; i < size; ++i)
	{
		newArr[i - 1] = arr[i];
	}
	free(arr);
	--size;
	return newArr;
}

int main()
{
	int size = 0;
	printf("enter the size of the array: ");
	scanf_s("%d", &size);

	int* arr = (int*)malloc(size * sizeof(int));
	int currentSize = 0;

	printf("enter %d elements to fill the array:\n", size);
	for (int i = 0; i < size; ++i)
	{
		printf("element %d: ", i + 1);
		scanf_s("%d", &arr[currentSize]);
		++currentSize;
	}

	printArray(arr, currentSize);

	int choice = 0;
	while (true)
	{
		printf("\nselect the action:\n");
		printf("1 - add element at end\n");
		printf("2 - add element to top\n");
		printf("3 - remove element from end\n");
		printf("4 - remove item from top\n");
		printf("0 - complete the programme\n");
		printf("your choice: ");
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 0:
			return 0;

		case 1:
		case 2:
			printf("enter the number to add: ");
			int newValue;
			scanf_s("%d", &newValue);

			switch (choice)
			{
			case 1:
				arr = addToEnd(arr, currentSize, newValue);
				break;
			case 2:
				arr = addToBegin(arr, currentSize, newValue);
				break;
			}
			break;

		case 3:
			arr = removeFromEnd(arr, currentSize);
			break;

		case 4:
			arr = removeFromBegin(arr, currentSize);
			break;

		default:
			printf("incorrect selection, please try again\n");
			continue;
		}

		printArray(arr, currentSize);
	}

	free(arr);
	return 0;
}