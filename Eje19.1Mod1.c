
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // 4. Ingresa dos números enteros, la computadora indica si el mayor es divisible por el menor.
    
    int peso;
    float precio, pesokg;
    peso = 0;
    
    precio = 140.00;
    
        
    printf("\nBienvenido al dispenser de café molido... \n");
    printf("\nIngresa la cantidad en gramos que deseas llevar... \n\n");
    scanf("%d", &peso);
    pesokg = ((float)peso/1000);
    printf("\n Total a pagar: $%2.2f",precio*pesokg);
    printf("\n\n");
    
    
    return 0;
}
