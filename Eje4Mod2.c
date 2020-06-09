
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // 4. Ingresa dos números enteros, la computadora indica si el mayor es divisible por el menor.
    
    int valor1, valor2;

  
    printf("Ingresa un numero entero...\n\n");
    scanf("%d",&valor1);
    
    printf("\nIngresa otro valor entero...\n\n");
    scanf("%d",&valor2);
    printf("\n");

    if(valor1>valor2 && valor1&valor2){
        printf("es divisible\n\n");
   
    }else{
        printf("%d",valor2);
        printf(" es mayor.\n\n");
    }
        
    return 0;
}
