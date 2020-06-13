#include <stdio.h>
#include <math.h>
//11) Realiza una función de nombre Siguiente tal que, recibiendo un número primo mayor que uno, devuelva el número primo inmediatamente siguiente y superior a dicho número primo. Por ejemplo, si se invoca siguiente(7), la función devolverá el número 11.

int Siguiente(int);

int main()
{

    int valor;

    printf("Ingrese un número primo para obtener el siguiente primo:\n");

    scanf("%d", &valor);

    if (Siguiente(valor) == 0)
    {

        printf("El valor no es un número primo valido\n");
    }
    else
    {

        printf("%d\n", Siguiente(valor));
    }

    return 0;
}

int Siguiente(int primo)
{

    int div, rest;
    div = 2;
    rest = primo % div;

    if (primo == 1)
    {
        return 0;
    }
    else if (primo == 2)
    {

        primo++;
        return primo;
    }
    else
    {

        primo++;
        rest = primo % div;

        while (rest == 0)
        {
            primo++;
            div++;
            rest = primo % div;
        }

        div = 2;
        rest = primo % div;

        while (rest == 0)
        {
            primo++;
            div++;
            rest = primo % div;
        }

        div = 5;
        rest = primo % div;

        if (rest == 0)
        {
            primo++;
            div = 2;
            rest = primo % div;

            while (rest == 0)
            {
                primo++;
                div++;
                rest = primo % div;
            }
        }

        return primo;
    }
}
