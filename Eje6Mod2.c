
#include <stdio.h>
#include <stdlib.h>

int main()
{
   //6. Ingresados dos números reales, la computadora muestra su cociente. Si el segundo número es cero, la computadora muestra un mensaje indicando la imposibilidad de la operación.

    
    int valor1, valor2;

    printf("Ingresa dos números reales para efectuar su división...\n\n");
    scanf("%d%d",&valor1,&valor2);
    
    if(valor2==0){
        printf("No es posible dividir por cero!\n\n");
   
    }else{
        printf("%d",valor1/valor2);
        printf("\n\n");
    }
        
    return 0;
}
