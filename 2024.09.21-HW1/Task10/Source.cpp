#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	scanf_s("%d", &a);
	printf("%d", a / 6);
	printf(" ");
	printf("%d", a / 6 * 4);
	printf(" ");
	printf("%d", a / 6);
	return EXIT_SUCCESS;
}