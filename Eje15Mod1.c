#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primerValor, segundoValor;
    
    printf("Ingrese un valor númerico: ");
    scanf("%f", primerValor);
    printf("Ingrese un valor númerico: \n");
    scanf("%f", segundoValor);
    printf("La suma de los valores es: %f\n", primerValor+segundoValor);
    printf("El resto de los valores es: %f\n", primerValor-segundoValor);
    printf("El producto de los valores es: %f\n", primerValor*segundoValor);
    printf("El cociente de los valores es: %f\n", primerValor/segundoValor);
    printf("El promedio de los valores es: %f\n", (primerValor+segundoValor)/2);
    printf("Y el doble del producto del primer valor menos la mitad del segundo: %f/n", (primerValor*2)-(segundoValor/2));
    
    
    return 0;
}
