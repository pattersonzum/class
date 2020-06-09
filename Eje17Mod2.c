#include <stdio.h>
#include <stdlib.h>
int main()
{
 //   17. Ingresados tres caracteres, la computadora los muestra ordenados alfabéticamente.

    char a,b,c;
    printf("Ingresa tres letras:\n");
    scanf("%c %c %c", &a,&b,&c);
    printf("En orden alfabético:");
    if (a>b && b>c) {
        printf(" %c,%c,%c",c, b, a);
    }else if (b>a && a>c){
        printf(" %c,%c,%c",c, a, b);
    }else if (c>b && b>a){
        printf(" %c,%c,%c",a, b, c);
    }else if (c>a && a>b){
        printf(" %c,%c,%c",b, a, c);
    }else if (b>c && c>a){
        printf(" %c,%c,%c",a, c, b);
    }else{
        printf(" %c,%c,%c",b, c, a);
    }
    printf(". \n\n");
    return 0;
}
