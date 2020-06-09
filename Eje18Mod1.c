#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Construye un programa que pregunte los años que tienes y emita como respuesta el número de días vividos.
   
    int años;
   
    printf("\nCuántos años tienes? ");
    scanf("%d", &años);
    
    printf("\nHas vidido %d", (años*365));
    printf(" días!\n\n\n");
      
    
    return 0;
}
