
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float logitud, pies, pulgadas;
   
    //Desarrolla un algoritmo que permita, dados ciertos centímetros como entrada de tipo flotante, emitir por pantalla su equivalencia en pies (enteros) y en pulgadas (flotante, 1 decimal).

    printf("Ingrese su estatura en cm (ejemplo: 161.50): ");
    scanf("%f", &logitud);
    
    pies = (logitud*0.0328);
    pulgadas = (pies)*12;
  
    printf("La longitud en pies es: %d", (int)pies);
    printf(" pies \n");
    printf("y equivale a ");
    printf("%1.1f", pulgadas);
    printf(" pulgadas \n ");
    
    
    return 0;
}
