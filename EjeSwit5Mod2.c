#include <stdio.h>
#include <math.h>

int main()
//5. Construir un programa que convierta Kg a otra unidad de medida de masa

{
    int opcion;
    float peso;
    printf("Introduzca peso en kilogramos:");
    scanf("%f",&peso);
    
    printf("Seleccione opción:\n");
    printf("1 - Hectogramos\n");
    printf("2 - Decagramos\n");
    printf("3 - Gramos\n");
    printf("4 - Decigramos\n");
    printf("5 - Centigramos\n");
    printf("6 - Miligramos\n");

    scanf("%d",&opcion);
    
    switch(opcion)
    {
        case 1:
            peso=peso*10;
            printf("%2.2f", peso);
            break;
    
        case 2:
            peso=peso*100;
            printf("%2.2f", peso);
            break;
    
        case 3:
    
            printf("%2.2f", (peso*1000));
            break;
    
        case 4:
   
            peso=peso*10000;
            printf("%2.2f", peso);
            break;
        
        case 5:
            peso=peso*100000;
            printf("%2.2f", peso);
            break;
            
        case 6:
            peso=peso*1000000;
            printf("%2.2f", peso);
            break;
   
    }
}

