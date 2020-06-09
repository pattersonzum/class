#include <stdio.h>
#include <math.h>

int main()
/* Una frutería ofrece las manzanas con descuento según la siguiente tabla:
Num de Kg. Comprados % descuento
0-2 0 2.01 - 5 10 5.01 - 10 15 10.01 en adelante 20
 Determina cuánto pagara una persona que compre X manzanas a Y precio en esa frutería.*/

{
    float kgManzanas, price;
 
    
    printf(" Ingresa el peso de manzanas en kg con decimales \n");
    scanf("%f",&kgManzanas);
    
    price = 40.00;

    if(kgManzanas<=2){
        printf(" deberás pagar %2.2f\n", kgManzanas*price);
    }else if (kgManzanas>2.0 && kgManzanas<=5){
        printf(" deberás pagar %2.2f\n", kgManzanas*price-price*0.10);
    }else if (kgManzanas>5.0 && kgManzanas<=10){
        printf(" deberás pagar %2.2f\n", kgManzanas*price-price*0.15);
    }else if(kgManzanas>10.0){
        printf(" deberás pagar %2.2f\n", kgManzanas*price-price*0.20);
    }
    
    
}
