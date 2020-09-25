#include<stdio.h>
#include<stdlib.h>
#define DIM 10

void quinela(int *vector){
    int i, num;
    printf("\nIngresa la posición: ");
    scanf("%d",&i);
    printf("\nIngrea un número: ");
    scanf("%d",&num);
    vector[i-1]=num;
}

void imprimir(int *vector){
    printf("\n");
    for (int i=0; i<DIM; i++) {
        printf("Posición:%d, Numero: %d\n",i+1,vector[i]);
    }
    
}

int main(){

    int vector[DIM] ={0,0,0,0,0,0,0,0,0,0,};
    int i;
    
    for (i=0; i<DIM; i++) {
        quinela(vector);
        imprimir(vector);
    }
   
    printf("\nLa quinela entera es:\n");
    
    imprimir(vector);
    
        return 0;
}

