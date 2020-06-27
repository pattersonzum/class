#include <stdio.h>

/*    3.    Se procesan los datos correspondientes a los artículos de venta de una empresa de electrodomésticos. De cada artículo se ingresa el código del artículo, precio del artículo y stock del artículo. No se conoce la cantidad de artículos que se procesan y el ingreso de datos finaliza con código de artículo -1. Se pide calcular:
    a.    La cantidad de artículos ingresados
    b.    Mostrar el mensaje “El articulo X está en el rango 120-360” si su stock está entre 120 y 360
    c.    El artículo que tiene el mínimo de stock, el que tiene el máximo stock y el articulo de máximo de precio de venta
    d.    El porcentaje de artículos que tengan precio de venta inferior a $3600
*/
void rango(int *);
int precioMin(int, int *);
int precioMax(int, int *);
int stockMaxim(int, int *);
int calcularInferior(int, int, int *);

int main()
{

    int stock, codigo, precio, cantidad = 0, precioMaximo = 0, PrecioMinimo = 100000, stockMax = 0, promedio = 0;

    printf("\nIngresar código de producto\n");
    scanf("%d", &codigo);

    while (codigo != -1)
    {

        printf("\nIngresar la cantidad de stock de producto\n");
        scanf("%d", &stock);

        rango(&stock);
        stockMaxim(stock, &stockMax);

        printf("\nIngresar el precio del de producto\n");
        scanf("%d", &precio);

        precioMin(precio, &PrecioMinimo);
        precioMax(precio, &precioMaximo);
        calcularInferior(precio, cantidad, &promedio);

        cantidad++;

        printf("\nIngresar código de producto\n");
        scanf("%d", &codigo);
    }

    printf("\nEl total de artículos ingresados es: %d\n", cantidad);
    printf("\nEl precio mínimo de los prouctos es: %d\n", PrecioMinimo);
    printf("\nEl precio Máximo de los prouctos es: %d\n", precioMaximo);
    printf("\nCantidad de productos con el precio inferior a 3600: %d\n", promedio);

    return 0;
}
void rango(int *n)
{

    if (*n > 120 && *n < 360)
    {
        printf("\nEl articulo %d está en el rango 120-360\n", *n);
    }
}
int precioMin(int precioMin, int *contador1)
{

    if (precioMin < *contador1)
    {
        *contador1 = precioMin;
        return *contador1;
    }
    return precioMin;
}

int precioMax(int precio, int *contador2)
{

    if (precio > *contador2)
    {
        *contador2 = precio;
        return *contador2;
    }

    return precio;
}

int stockMaxim(int stock, int *contador3)
{

    if (stock > *contador3)
    {
        *contador3 = stock;
        return *contador3;
    }

    return stock;
}

int calcularInferior(int precio, int x, int *contador4)
{
    int contador=0;

    if (precio > 3600)
    {
        contador++;

        *contador4= x/contador;

        return *contador4;
    }

    return precio;
}
