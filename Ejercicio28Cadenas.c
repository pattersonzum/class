#include<stdio.h>

#define DIM 20 

int esVocal(char letra){

    if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
    {
        return 1;
    }else
    {
        return 0;
    }
    
    
}


int vocal(char*cadena){
    int i, contaVocal=0;

    for ( i = 0; cadena[i]!= '\0'; i++)
    {
        if (esVocal(cadena[i]))
        {
           contaVocal++;
        }

    }

    return contaVocal;

}


int main(){


    char cadena[]="this is the end my only friend";


   printf("El numero de vocales es %d\n",vocal(cadena));

    return 0;
}