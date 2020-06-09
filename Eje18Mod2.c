#include <stdio.h>
#include <stdlib.h>
int main()
{

//18. Ingresados 3 números enteros, la computadora indica si están desordenados u ordenados en forma creciente o decreciente.

    int a,b,c;
    printf("Ingresa tres numeros:\n");
    scanf("%d %d %d", &a,&b,&c);
    printf("\nEn orden creciente:");
    if (a>b && b>c) {
        printf(" %d,%d,%d",c, b, a);
    }else if (b>a && a>c){
        printf(" %d,%d,%d",c, a, b);
    }else if (c>b && b>a){
        printf(" %d,%d,%d",a, b, c);
    }else if (c>a && a>b){
        printf(" %d,%d,%d",b, a, c);
    }else if (b>c && c>a){
        printf(" %d,%d,%d",a, c, b);
    }else{
        printf(" %d,%d,%d",b, c, a);
    }
    printf(". \n\n");
    
    printf("y en orden decreciente:");
    if (a>b && b>c) {
        printf(" %d,%d,%d",a, b, c);
    }else if (b>a && a>c){
        printf(" %d,%d,%d",b, a, c);
    }else if (c>b && b>a){
        printf(" %d,%d,%d",c, b, a);
    }else if (c>a && a>b){
        printf(" %d,%d,%d",c, a, b);
    }else if (b>c && c>a){
        printf(" %d,%d,%d",b, c, a);
    }else{
        printf(" %d,%d,%d",a, c, b);
    }
    printf(". \n\n");
    return 0;
}
