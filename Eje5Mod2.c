
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // 4. Desarrolla un algoritmo que le permita leer dos valores A y B e indicar si la suma de los dos números es par.
    
    int A, B;

  
    printf("Ingresa dos números enteros...\n\n");
    scanf("%d%d",&A,&B);
    
    if((A+B)%2==0){
        printf("La suma es par\n\n");
   
    }else{
        printf("La suma es impar\n\n");
    }
        
    return 0;
}
