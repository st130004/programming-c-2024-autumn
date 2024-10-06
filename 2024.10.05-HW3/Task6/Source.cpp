#include<cstdio> 

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);

    int k = 1;
    for (int i = 0; i < 46340; ++i) 
    {
        int d = a * k;
        if (d % b == 0) 
        {
            printf("%d", d); 
            break; 
        }
        ++k;
    }
    return 0;
}
