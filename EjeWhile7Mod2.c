#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//13. 5! (que se lee "factorial de cinco") es igual al producto 5.4.3.2.1. De manera similar, 8! =8.7.6.5.4.3.2.1. Escribe un programa que calcule el factorial de un número cualquiera que se ingresa por teclado.

int main()
{

    int numero,fac;
    printf("Ingrea un número entero.\n");
    scanf("%d",&numero);
    fac=1;
    printf("%d!= ", numero);
    
    while (numero>=1) {
        
        fac=fac*numero;
        
        numero--;
        
        
    }printf("%d\n", fac);
    
    return 0;
    
}
