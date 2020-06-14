#include <stdio.h>
#include <stdlib.h>
//16) Desarrollar una función de encabezado int ordenarMayor(int* v1, int* v2, int*v3) en la que la función ponga en V1 el menor valor de las tres variables, en v2 el del medio y en v3 el mayor. Noten el encabezado y el nombre de la función (que haga lo que el nombre de la función dice que hace).

int OrdenarMayor(int *, int *, int *);

int main()
{
    int valor1, valor2, valor3;

    printf("\nIngresar tres valores para ordenarlos de menor a mayor\n\n");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    OrdenarMayor(&valor1, &valor2, &valor3);

    printf("%d, %d, %d.\n\n", valor1, valor2, valor3);

    return 0;
}

int OrdenarMayor(int *v1, int *v2, int *v3)
{
    int val1, val2, val3;

    if ((*v1 < *v2 && *v1 < *v3) && (*v2 < *v3))
    {

        *v1 = *v1;
        *v2 = *v2;
        *v3 = *v3;
    }
    else if ((*v2 < *v1 && *v2 < *v3) && (*v1 < *v3))
    {

        val1 = *v1;
        val2 = *v2;

        *v1 = val2;
        *v2 = val1;
        *v3 = *v3;
    }
    else if ((*v1 > *v2 && *v1 > *v3) && (*v2 > *v3))
    {

        val1 = *v1;
        val3 = *v3;

        *v1 = val3;
        *v2 = *v2;
        *v3 = val1;
    }
    else if ((*v3 < *v1 && *v3 < *v2) && (*v1 < *v2))
    {

        val1 = *v1;
        val2 = *v2;
        val3 = *v3;

        *v1 = val3;
        *v2 = val1;
        *v3 = val2;
    }
    else if ((*v2 < *v1 && *v2 < *v3) && (*v3 < *v1))
    {

        val1 = *v1;
        val2 = *v2;
        val3 = *v3;

        *v1 = val2;
        *v2 = val3;
        *v3 = val1;
    }
    else
    {

        val2 = *v2;
        val3 = *v3;

        *v1 = *v1;
        *v2 = val3;
        *v3 = val2;
    }
    return 0;
}
