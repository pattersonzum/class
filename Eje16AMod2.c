
#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*16. Escribe un programa que reciba dos números enteros como entrada y escriba el mensaje "signos opuestos", sólo si uno de los números ingresados es negativo:
   a) usando un sólo operador lógico
   b) sin utilizar operadores lógicos en la condición.*/
    
    int valor1, valor2;
    
    printf("Ingresa dos números enteros...\n\n");
    scanf("%d%d",&valor1,&valor2);

  
    if (valor1<0 || valor2<0) {
        printf("signos opuestos...");
        printf("\n");
    }else{
        printf("gracias...\n");
    }
    
    
    
    return 0;
}
