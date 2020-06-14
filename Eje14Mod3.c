#include <stdio.h>
#include <stdlib.h>
//14) Desarrolle la función “esBisiesto” que reciba un año por parámetro y devuelva “verdadero” si el año es bisiesto (Un año es bisiesto si es divisible por 400, o bien si es divisible por 4 pero no por 100).

int esBisiesto(int);

int main()
{

    int date;

    printf("\nIngrese un año para saber si es bisiesto\n\n");
    scanf("%d", &date);

    if (esBisiesto(date) == 1)
    {
        printf("\nes bisiesto\n\n");
    }
    else
    {
        printf("\nNo es bisiesto\n\n");
    }

    return 0;
}

int esBisiesto(int year)
{

    if (year % 100 != 0 && (year % 400 == 0 || year % 4 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
