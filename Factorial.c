#include <stdio.h>

int factoriar(int);

int main()
{

    int x;
    scanf("%d", &x);
    printf("%d\n", factoriar(x));

    return 0;
}
int factoriar(int n)
{

    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factoriar(n - 1);
    }
}
