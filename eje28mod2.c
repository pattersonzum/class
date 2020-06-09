#include <stdio.h>

int main() {
//28. En un almacén se rebaja 20% del precio al cliente si el valor a pagarse es mayor a $200. Dado un valor, muestre lo que debe pagar el cliente.

    float valorPrecio;
    printf("Ingresa el valor de tu producto:\n ");
    scanf("%f",&valorPrecio);
    
    if (valorPrecio>200) {
        printf("\nEl monto a pagar es:\n %.2f\n\n ",(valorPrecio*0.80));
    }else{
        printf("\nEl monto a pagar es:\n %.2f\n\n ",valorPrecio);
    }
    
}
