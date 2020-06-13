#include <stdio.h>
#include <math.h>
//8) Desarrolle la función “esPrimo” que devuelva verdadero si el numero pasado por parámetro es un numero primo.

int esPrimo(int *);

int main()
{

    int num;
    num = 0;

    printf("Ingresa un número para saber si es Primo:\n");

    scanf("%d", &num);

    if (esPrimo(&num) == 1)
    {
        printf("%d Es Primo\n", num);
    }
    else
    {
        printf("%d No es Primo\n", num);
    }

    return 0;
}

int esPrimo(int *valor)
{

    int prim, div;

    div = 2;

    prim = *valor % div;

    while (prim != 0 && div != *valor)
    {
        prim = *valor % div;
        div++;
    }
    if (div == *valor)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
