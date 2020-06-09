#include <stdio.h>
int main(){
       float nota;
       printf ("Introduzca la nota del 0 al 10: ");
       scanf ("%f", &nota);
    if (nota < 5){
      printf("SUSPENSO\n");
    }else if (nota >= 5 && nota<8){
        printf("APROBADO\n");
    }else if (nota >=8 && nota<=9){
        printf("NOTABLE\n");
    }else{
        printf("SOBRESALIENTE\n");
    }
    
}
