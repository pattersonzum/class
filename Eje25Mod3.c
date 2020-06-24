#include <stdio.h>
/*25) Construir una función que permita procesar un número desconocido de datos de productos vendidos, e ingresar por cada uno:
 
a) identificación del producto (número entero > 0 y menor a 1000), y por cada producto
ingresado:
 
b) precio de costo, ej: 5.30
c) precio de venta, ej: 9.50
d) cantidad vendida, ej: 25
 
El ciclo finaliza con identificación del producto 0 (cero). Calcular y emitir:
 
i) por cada producto, cuánto dinero le deja de ganancia la venta del mismo. Ej: 9.5 – 5.3 *
25 = 105;
 
ii) La función main debe emitir el total de productos procesados (no la cantidad vendida)
 
y las ganancias que se obtuvieron por esas ventas. Ej: se procesaron 43 productos, las ganancias obtenidas fueron $2398.*/

int producto(int *, int *);
int main()
{

    int id, contar = 0;

    printf(" \n Las ganancias obtenidas fueron $ %d, y se procesaron %d productos. \n\n", producto(&id, &contar), contar);

    return 0;
}

int producto(int *id, int *contar)
{

    int precioCosto, precioVenta, cantidad, acumulador = 0;

    printf("\n\n***    Hola, bienvenido.   ***\n\n");
    printf("\nPara comenzar ingresa un código de producto:\n\n");
    scanf("%d", &*id);

    while (*id > 0 && *id < 1000)
    {

        printf("\nIngresa el precio de costo del producto...\n\n");
        scanf("%d", &precioCosto);
        printf("\nIngresa el precio de venta del producto...\n\n");
        scanf("%d", &precioVenta);
        printf("\nIngresa la cantidad de productos...\n\n");
        scanf("%d", &cantidad);
        acumulador += ((precioVenta - precioCosto) * cantidad);
        (*contar)++;
        printf("\nIngresa un código de producto:\n\n");
        scanf("%d", &*id);
    }

    return acumulador;
}
