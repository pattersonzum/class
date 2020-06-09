#include <stdio.h>
#include <stdlib.h>

//4. Desarrolle un algoritmo que le permita realizar la escritura de los primeros 100 números naturales. Análisis: Para poder escribir los primeros 100 números primero hay que generar dichos valores. Una forma de generar los valores es con las estructuras cíclicas. Hacer una variable que se inicie en 1 que sería el primer valor a escribir y finalice en 100 que sería el último número necesitado incrementando de uno en uno dicha variable.

int main()
{

    int numero,exp;
    numero=2;
    exp=1;

    while (exp<999) {
       exp= exp*numero;
    }printf("%d \n\n",exp);
 
    return 0;
    

}
