/*24) Realiza un programa que lea un número de hasta 8 cifras y emita por pantalla la cifra resultante de aplicar el siguiente proceso:
a) Sumar el valor absoluto de todas las cifras del número.
b) Si el valor resultante tiene más de una cifra, volver a sumar todas sus cifras sucesivamente
hasta obtener un valor de una única cifra.
Ejemplos: Valor introducido por el usuario: 68543210 -> 6+8+5+4+3+2+1+0 = 29; 29 -> 2+9 = 11; 11 -> 1+1 = 2: Valor a mostrar: 2*/
#include <stdio.h>

void funcion(int *n)
{

    int acumNum = 0, divi = 10000000, sum = 0;

    acumNum = +*n / divi;

    while (divi >= 1 && divi < 100000000)
    {

        if (divi > 1000000)
        {
            divi = 1000000;
            *n = *n - acumNum * 10000000;
        }
        else if (divi == 1000000)
        {
            divi = 100000;
            *n = *n - acumNum * 1000000;
        }
        else if (divi == 100000)
        {
            divi = 10000;
            *n = *n - acumNum * 100000;
        }
        else if (divi == 10000)
        {
            divi = 1000;
            *n = *n - acumNum * 10000;
        }
        else if (divi == 1000)
        {
            divi = 100;
            *n = *n - acumNum * 1000;
        }
        else if (divi == 100)
        {
            divi = 10;
            *n = *n - acumNum * 100;
        }
        else if (divi == 10)
        {
            divi = 1;
            *n = *n - acumNum * 10;
        }
        else if (divi == 1)
        {

            divi = 1000000000;
            *n = *n - acumNum * 1;
        }
        sum = sum + acumNum;
        acumNum = +*n / divi;
    }

    printf("%d\n", sum);

    if (sum > 9)
    {
        *n = sum;
        funcion(&*n);
    }
}

int main()
{

    int num;

    printf("\nIngresa un número\n");
    scanf("%d", &num);

    while (num > 99999999)
    {
        printf("\nError, ingresa un numero más pequeño\n");
        scanf("%d", &num);
    }

    funcion(&num);

    return 0;
}
