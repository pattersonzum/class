
#include <stdio.h>
#include <stdlib.h>

int main()
{
   //9. Desarrolla un algoritmo que le permita leer tres valores A, B y C e indicar si uno de los tres divide a los otros dos exactamente.

    int valor1, valor2, valor3;
    
    printf("Ingresa tres números enteros...\n\n");
    scanf("%d%d%d",&valor1,&valor2,&valor3);

  
    if (valor1%valor2==0 && valor3%valor2==0) {
        printf("son divisibles exactos entre...%d", valor2);
        printf("\n");
    }else if(valor1%valor3==0 && valor2%valor3==0){
        printf("son divisibles exactos entre...%d", valor3);
         printf("\n");
    }else if(valor3%valor1==0 && valor2%valor1==0){
        printf("son divisibles exactos entre...%d", valor1);
         printf("\n");
    }else{
        printf("no son divisibles exactamente entre sí\n\n");

    }
      
    
        
    return 0;
}
