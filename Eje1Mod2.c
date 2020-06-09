
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir si dicho número es par o impar.
    
    int n;
    
    printf("Ingresa un numero entero... ");    
    scanf("%d",&n);
    
    if(n%2==0){
        printf("es par\n");
    }
    else{
        printf("es impar\n");
    }
    
    return 0;
}
