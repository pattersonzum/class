#include <stdio.h>

int main()
{

    int n, div;

    printf("\nIngrese un número para convertir a binario\n");
    scanf("%d", &n);
    div = n;
    while (div > 0)
    {

        if (div % 2 == 0)
        {
            printf("0");
        }
        else
            printf("1");

        div = div / 2;
    }
    printf("\n");

    return 0;
}
