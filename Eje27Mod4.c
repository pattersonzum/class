#include <stdio.h>
#include <string.h>
#define DIM 20

int longCadena(char vector[DIM])
{
    int i;

    for (i = 0; vector[i] != '\0'; i++)
    {
        ;
    }

    return i;
}

int largoCadena(char *vector)
{
    int i;

    for (i = 0; *vector != '\0'; i++)
    {
        *vector++;
    }

    return i;
}

int main()
{

    char *vector;

    printf("ingresar\n\n");
    gets(vector);


    printf("%s\n", vector);

    printf("%d\n", longCadena(vector));
    printf("%d\n", largoCadena(vector));

    return 0;
}
