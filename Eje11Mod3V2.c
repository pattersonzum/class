#include <stdio.h>
#include <stdlib.h>
//11) Realiza una función de nombre Siguiente tal que, recibiendo un número primo mayor que uno, devuelva el número primo inmediatamente siguiente y superior a dicho número primo. Por ejemplo, si se invoca siguiente(7), la función devolverá el número 11.
//con credito de Vir

int cosin(int);

int main()
{

    int primeNumb;

    printf("\nIngresa un número primo:\n\n");
    scanf("%d", &primeNumb);

    printf("\nEl siguiente número primo es: %d\n\n", cosin(primeNumb));

    return 0;
}

int cosin(int primo)
{

    int div, count, rest;
    div = 1;
    rest = primo % div;

    if (primo == 1)
    {
        return 0;
    }

    do
    {
        primo++;
        count = 0;

        for (div = 1; div <= primo; div++)
        {

            rest = primo % div;

            if (rest == 0)
            {
                count++;
            }
        }

    } while (count != 2);

    return primo;
}
