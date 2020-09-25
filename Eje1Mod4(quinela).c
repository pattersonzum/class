#include <stdio.h>
#include <stdlib.h>
/*1. Escribe un programa que almacene, en un vector con dimensión 10, los números 10 primeros números de la Quiniela. 
El ingreso de los datos será indicando posición-numero, de modo que puedo ingresar la posición 5 antes que la posición 2.*/

int main()
{

    int vector[10];
    int i;

    printf("\nIngresa la posición\n");
    scanf("%d", &i);
    printf("\nIngrea un número\n");
    scanf("%d", &vector[i - 1]);
    printf("\nIngresa la posición\n");
    scanf("%d", &i);
    printf("\nIngrea un número\n");
    scanf("%d", &vector[i - 1]);
    printf("\nIngresa la posición\n");
    scanf("%d", &i);
    printf("\nIngrea un número\n");
    scanf("%d", &vector[i - 1]);
    printf("\nIngresa la posición\n");
    scanf("%d", &i);
    printf("\nIngrea un número\n");
    scanf("%d", &vector[i - 1]);
    printf("\nIngresa la posición\n");
    scanf("%d", &i);
    printf("\nIngrea un número\n");
    scanf("%d", &vector[i - 1]);
    printf("\nIngresa la posición\n");
    scanf("%d", &i);
    printf("\nIngrea un número\n");
    scanf("%d", &vector[i - 1]);
    printf("\nIngresa la posición\n");
    scanf("%d", &i);
    printf("\nIngrea un número\n");
    scanf("%d", &vector[i - 1]);
    printf("\nIngresa la posición\n");
    scanf("%d", &i);
    printf("\nIngrea un número\n");
    scanf("%d", &vector[i - 1]);
    printf("\nIngresa la posición\n");
    scanf("%d", &i);
    printf("\nIngrea un número\n");
    scanf("%d", &vector[i - 1]);
    printf("\nIngresa la posición\n");
    scanf("%d", &i);
    printf("\nIngrea un número\n");
    scanf("%d", &vector[i - 1]);

    printf("\nLa quinela entera es:\n");
    printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9]);

    return 0;
}
