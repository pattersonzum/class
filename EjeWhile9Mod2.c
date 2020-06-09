#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//9. Desarrolle un algoritmo que le permita realizar la escritura de los primeros N números Primos. Análisis: En este ejercicio involucra el concepto anterior de número primo y se está adicionando una estructura cíclica que se encargara de contar los N números primos que se desean escribir.

int main()
{

    int n, prim, divisor;
    printf("Los números primos son:\n");
    divisor=2;
    n=2;
    prim=n%divisor;

    
    while (n<100) {
        
        while (prim!=0 && divisor!=n) {
            prim=n%divisor;
            divisor++;
        
        }if (divisor==n) {
            
            printf("%d\n",n);
           
        }
            n++;
            divisor=2;
            prim=n%divisor;
           
           
    }
    
    return 0;
    
}
