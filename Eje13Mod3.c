#include <stdio.h>
#include <stdlib.h>
//13) Desarrolle la función void datoValidado (int *dato, int min, int max) que reciba un mínimo y un máximo por parámetro; que pida por teclado el ingreso de un valor, valide que el valor este entre min y max y lo devuelva en *dato.

void datoValidado(int *, int, int);

int main()
{
    int valor, min, max;
    printf("\nIngresa tres valores:\n\n");
    scanf("%d%d%d", &valor, &min, &max);

    datoValidado(&valor, min, max);

    if (valor != 0)
    {
        printf("\nEl valor %d se encuentra entre el mínimo y máximo.\n\n", valor);
    }
    else
    {
        printf("\nEl valor no está en el rango\n\n");
    }

    return 0;
}

void datoValidado(int *dato, int min, int max)
{

    if (*dato > min && *dato < max)
    {
        *dato = *dato;
    }
    else
    {
        *dato = 0;
    }
}
