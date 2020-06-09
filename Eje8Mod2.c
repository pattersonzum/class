
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // 8. Desarrolla un algoritmo que le permita leer tres valores A, B y C e indique cuál es valor del centro (análogo al ejercicio 7).
    
    int valor1, valor2, valor3;
    
    printf("Ingresa tres números enteros...\n\n");
    scanf("%d%d%d",&valor1,&valor2,&valor3);

  
    if(valor1<valor2 && valor2<valor3){
        printf("%d",valor2);
        printf(" es intermedio...\n\n");
    }else if(valor1>valor2 && valor1<valor3){
        printf("%d",valor1);
        printf(" es intermedio...\n\n");
    }else{
        printf("%d",valor3);
        printf(" es intermedio...\n\n");
    }
        
    return 0;
}
