#include <stdio.h>
#include <math.h>
//4) Desarrolle la función “potencia” que reciba por parámetros un entero X y una potencia Y; y Y devuelva por resultado X .

int potencia(int, int);

int main()
{

    int x, y;

    printf("Ingrese dos valores para elevar el promero a la potencia del segundo:\n");

    scanf("%d %d", &x, &y);

    potencia(x, y);

    return 0;
}

int potencia(int x, int y)
{
    int power;

    power = pow(x, y);

    printf("%d elevado a %d, es %d\n", x, y, power);

    return power;
}
