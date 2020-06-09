
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir en la pantalla si dicho número es Positivo, Negativo o 0 (cero).
    
    int n;
    
    printf("Ingresa un numero entero... ");
    scanf("%d",&n);

    if(n>0){
        printf("es positivo\n");
    }else{
        if(n<0){
            printf("es negativo\n");
        }else{
            printf("es cero\n");
        }
    }
        
    return 0;
}
