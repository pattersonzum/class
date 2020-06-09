
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Construye un programa que dados el valor de 1kg de determinada mercadería y la cantidad mercadería comprada, emite el valor del total a pagar.
    
    
    int producto, cantidad;
    float precio1, precio2, precio3, precio4;
    float peso;
    
    precio1 = 160.00;
    precio2 = 40.00;
    precio3 = 10.00;
    precio4 = 80.00;
    
    
    printf("\nBienvenido...\n");
    printf("\nPor favor elige un producto de las siguientes opciones:\n");
    printf("\n Café digita 1");
    printf("\n Arroz digita 2");
    printf("\n Filtros de Café digita 3");
    printf("\n Latas de cerveza digita 4\n\n");
    
    scanf("%d", &producto);

    printf("\nSi el producto se vende por peso ingresa la cantiad de producto en Kilos:(sin la unidad kg)\n(si tu producto no se vende por peso ingresa “0”).\n");
    
    scanf("%f", &peso);
    
    printf("\nIngresa la cantindad unitaria de tu producto.");
    
    scanf("%d", &cantidad);
    
    
    
    return 0;
}
