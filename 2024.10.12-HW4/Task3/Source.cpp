#include<cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int a[1000];
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &a[i]);
    }

    int min_value = a[0];
    int max_value = a[0];

    for (int i = 1; i < n; ++i)
    {
        if (a[i] > max_value)
        {
            max_value = a[i];
        }
        else if (a[i] < min_value)
        {
            min_value = a[i];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (a[i] == max_value)
        {
            a[i] = min_value;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }

    return 0;
}