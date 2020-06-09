
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float estatura, pies, pulgadas;
    int foot;
    
    //Desarrolla un algoritmo que permita, dados ciertos centímetros como entrada de tipo flotante, emitir por pantalla su equivalencia en pies (enteros) y en pulgadas (flotante, 1 decimal).

    printf("Ingrese su estatura en cm (ejemplo: 161.50): ");
    scanf("%f", &estatura);
    
    pies = (estatura*0.0328);
    foot = pies;
    pulgadas = (pies-foot)*12;
  
    printf("Tu estatura en pies y pulgadas es: %d", (int)pies);
    printf("'");
    printf("%1.1f", pulgadas);
    printf("”, \n ");
    
    
    return 0;
}
