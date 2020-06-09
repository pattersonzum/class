
#include <stdio.h>
#include <stdlib.h>

int main()
{
   //  Completa el programa incluyendo el espacio en blanco en el siguiente fragmento de programa de manera que una persona de menos de 1,82 m. de estatura y peso superior a 90,7 Kg. se clasifique como de peso excesivo, y las demás personas como de peso adecuado. Vuelve a escribir el fragmento anterior, pero utilizando el operador || (OR) en la condición de if.
    
    int estatura, peso;
    
   printf("Ingrese la estatura ");
    scanf("%d",&estatura);
    printf("Ingrese el peso ");
    scanf("%d",&peso);
    
    if (estatura<182 || peso>90.7){
        printf( "Peso excesivo! ");
    }else{
        printf( "Peso adecuado. ");
    }

    
    return 0;
}
