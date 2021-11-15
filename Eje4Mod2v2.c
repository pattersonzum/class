#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero = 0, acumulador = 0, maximo = 0, minimo = 0,contador = 0;

    float promedio = 0;


    printf("\nIngresa un numero natural o 0 para salir.\n");

    //los numeros naturales del 1 al infinito

    scanf("%d",&numero);

    minimo = numero;


    while(numero!=0){

        contador++;

        acumulador+=numero;

        if(numero>maximo){

            maximo=numero;
        }

        if(numero<minimo){

            minimo = numero;
        }

        printf("\nIngresa un numero natural o 0 para salir.\n");

        scanf("%d",&numero);

    }

    promedio = acumulador/(float)contador;

    if (contador!=0){

        printf("\nLa suma del total es: %d\n",acumulador);
        printf("\nEl promedio es\n %.2f",promedio);
        printf("\nMaximo: %d \t Minimo: %d\n\n",maximo,minimo);


    }else printf("\nNo se ingresaron datos\n");



    return 0;


}
