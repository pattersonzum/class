#include<stdio.h>

#define DIM 20 

int largo(char*cadena){
    int i;

    for ( i = 0; cadena[i]!= '\0'; i++)
    {
       
    }
    
    return i;

}


int main(){


    char cadena[]="this is the my only frined";


   printf("El largo del string es: %d\n",largo(cadena));

    return 0;
}