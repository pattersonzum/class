
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //22 Construye un programa que permita ingresar la superficie de un cuadrado(enm2),el mismo debe emitir por pantalla su perímetro.

    int area;
    double sqrt(double x);
    
    printf("\nHola... Ingresa el area de un cuadrado en metros cuadrados sin unidades...");
    printf("\n\n");
    scanf("%d", &area);
    printf("\n");
    
    
    printf("\nhas ingresdo %d", area);
    printf(" m2");
    
    printf("\nEl perímetro del cuadrado es: %.2f", sqrt(area)*4);
    printf("\n\n");
    
    
    return 0;
}
