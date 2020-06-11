#include <stdio.h>
#include <math.h>
//5) Desarrolle la función “tablaDeMultiplicar” que reciba un entero por parámetro y muestre por pantalla su tabla de multiplicar de 0 a 10.

int tablaDeMultiplicar(int);

int main()
{
    int num;
    printf("Ingresa un número para conocer su tabla de multiplicar:\n");
    scanf("%d", &num);

    tablaDeMultiplicar(num);

    return 0;
}

int tablaDeMultiplicar(int tabla)
{

    printf("la tabla de %d es:\n %d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", tabla, tabla, tabla * 2, tabla * 3, tabla * 4, tabla * 5, tabla * 6, tabla * 7, tabla * 8, tabla * 9, tabla * 10);

    return 0;
}
