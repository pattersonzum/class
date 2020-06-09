
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir en la pantalla si dicho número es Positivo, Negativo o 0 (cero).
    
    int valor1, valor2;
    
    printf("Ingresa un numero entero...\n\n");
    scanf("%d",&valor1);
    
    printf("\nIngresa otro valor entero...\n\n");
    scanf("%d",&valor2);
    printf("\n");

    if(valor1<valor2){
        printf("%d",valor2);
        printf(" es mayor.\n\n");
    }else{
        printf("%d",valor1);
        printf(" es mayor.\n\n");
    }
        
    return 0;
}
