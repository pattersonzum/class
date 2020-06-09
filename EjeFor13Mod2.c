#include <stdio.h>
#include <stdlib.h>

//13. 5! (que se lee "factorial de cinco") es igual al producto 5.4.3.2.1. De manera similar, 8! =8.7.6.5.4.3.2.1. Escribe un programa que calcule el factorial de un número cualquiera que se ingresa por teclado.


int main()
{

    int numero,fac;
    printf("Ingrea un número entero.\n");
    scanf("%d",&numero);
    fac=1;
    printf("%d!= ", numero);
  
    for (numero=numero; numero>1; numero--) {
        fac=fac*numero;
    }printf("%d\n\n",fac);
 
    return 0;
    

}
