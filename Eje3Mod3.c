#include <stdio.h>
//Desarrolle la función “mayorDeDos” que reciba dos enteros por parámetro y muestre por
//pantalla al mayor de ellos. Luego modifíquela a “getMayorDeDos” para que devuelva el mayor como resultado.

void mayorDeDos(int, int);
int getMayorDeDos(int, int);

int main()
{

    int valor, valor2;

    printf("Ingrese dos valores\n");

    scanf("%d %d", &valor, &valor2);

    mayorDeDos(valor, valor2);

    printf("el mayor es %d\n", getMayorDeDos(valor, valor2));

    return 0;
}

void mayorDeDos(int a, int b)
{

    if (a > b)
    {
        printf("El mayor es %d\n", a);
    }
    else
    {
        printf("El mayor es %d:\n", b);
    }
}

int getMayorDeDos(int a, int b)
{

    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
