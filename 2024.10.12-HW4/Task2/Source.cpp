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

    int left = 0;
    int right = 0;

    scanf_s("%d", &left);
    scanf_s("%d", &right);

    int max_value = a[left - 1];
    int max_index = left - 1;

    for (int i = left - 1; i < right; ++i) 
    {
        if (a[i] > max_value)
        {
            max_value = a[i];
            max_index = i;
        }
        else if (a[i] == max_value && i < max_index)
        {
            max_index = i;
        }
    }

    printf("%d %d\n", max_value, max_index + 1);

    return 0;
}