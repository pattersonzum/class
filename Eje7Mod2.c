
#include <stdio.h>
#include <stdlib.h>

int main()
{
   //7. Desarrolla un algoritmo que le permita leer tres valores enteros e indique cuál es el mayor.

    
    int valor1, valor2, valor3;

    printf("Ingresa tres números enteros...\n");
    scanf("%d%d%d",&valor1,&valor2,&valor3);
    
    if(valor1>valor2 && valor1>valor3){
        printf("%d",valor1);
        printf(" es mayor...\n\n");
    }else if(valor2>valor1 && valor2>valor3){
        printf("%d",valor2);
        printf(" es mayor...\n\n");
    }else{
        printf("%d",valor3);
        printf(" es mayor...\n\n");
    }
        
    return 0;
}
