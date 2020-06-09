#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//8. Desarrolle un algoritmo que le permita leer un valor entero positivo N y decir si es primo o no. Análisis: Un número es primo cuando es divisible tan solo por la unidad y por si mismo. Para determinar si un número es primo o no se realiza la verificación de la división de dicho número con el rango de datos comprendidos entre el dos y la mitad del número. Si existe algún valor de dicho rango que divide exactamente a nuestro número entonces este no será primo. Si al finalizar dicha revisión no hay ningún valor que lo divida exactamente entonces nuestro número será primo. La revisión se hace hasta la mitad del número ya que de la mitad hacia arriba ningún valor lo divide exactamente.
int main()
{

    int n, prim, divisor;
    divisor=2;
    printf("\nIngreser un número natural para saber si es primo.\n");
    scanf("%d",&n);
    prim=n%divisor;

    
    while (prim!=0 && divisor!=n) {
        
        prim=n%divisor;
        divisor=divisor+1;

    }if (divisor==n) {
        printf("Es un número primo.\n\n");
    }else{
        printf("No es primo.\n\n");
    }
    
    return 0;
    
}
