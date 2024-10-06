#include <cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    int m = 0;
    scanf("%d", &n);
    scanf("%d", &m);

    int k = 1;

    while ((m * k) % n != 0) 
    {
        k++;
    }

    printf("%d", k);
    return 0;
}
