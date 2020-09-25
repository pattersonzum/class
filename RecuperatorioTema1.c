#include <stdio.h>

void procesar(char *categoria, char *producto, float *precio, float *recaudacionOllas, float *recaudacionSarten, float *recaudacionUten, float *totalVentas)
{

    if (*categoria == 'C')
    {

        if (*producto == 'O')
        {
            *recaudacionOllas += *precio;
        }
        else if (*producto == 'S')
        {

            *recaudacionSarten += *precio;
        }
        else if (*producto == 'U')
        {

            *recaudacionUten += *precio;
        }
    }
    else if (*categoria == 'E')
    {
        if (*producto == 'O')
        {
            *recaudacionOllas += (*precio * 0.80);
        }
        else if (*producto == 'S')
        {

            *recaudacionSarten += (*precio * 0.80);
        }
        else if (*producto == 'U')
        {

            *recaudacionUten += (*precio * 0.80);
        }
    }
}

void funcion1(int *dni, int *ventas, int *vecinas, char *categoria, char *producto, float *precio, float *recaudacionOllas, float *recaudacionSarten, float *recaudacionUten, float *totalVentas, int *ollas, int *sartenes, int *utencilios)
{
    char sale;
    int vent = 0;
    float totalPorVecina = 0;

    printf("Ingresa un Numero de DNI de la vecina:\n");
    scanf("%d", dni);

    while (*dni != 1)
    {

        (*vecinas)++;

        printf("\nIngresa una categoría (C para común o E para Especial):\n");
        fflush(stdin);
        scanf("%c", categoria);

        printf("\nIngresar venta?: (S - SI, N - no)\n");
        fflush(stdin);
        scanf("%c", &sale);

        if (sale == 'S')
        {
            vent = 1;
        }
        else if (sale == 'N')
        {
            vent = 0;
        }

        while (vent == 1)
        {

            (*ventas)++;

            printf("\nIngresa Un tipo de producto 'O' (olla), 'S' (sartén) o 'U' (utensilios de cocina):\n");
            fflush(stdin);
            scanf("%c", producto);

            if (*producto == 'O')
            {
                (*ollas)++;
            }
            else if (*producto == 'S')
            {
                (*sartenes)++;
            }
            else if (*producto == 'U')
            {
                (*utencilios)++;
            }

            printf("\nIngresa el valor del producto:\n");
            fflush(stdin);
            scanf("%f", precio);

            procesar(categoria, producto, precio, recaudacionOllas, recaudacionSarten, recaudacionUten, totalVentas);

            printf("\nIngresar venta?: (S - SI, N - no)\n");
            fflush(stdin);
            scanf("%c", &sale);

            if (sale == 'S')
            {
                vent = 1;
            }
            else
            {
                vent = 0;
            }
        }
        totalPorVecina = (*recaudacionUten) + (*recaudacionSarten) + (*recaudacionOllas);

        printf("\nTotal de la vecina %d: %7.2f\n", *vecinas, totalPorVecina);
        printf("\nOllas: $ %7.2f, Sartenes: $ %7.2f,  Utencilios: $ %7.2f\n", *recaudacionOllas, *recaudacionSarten, *recaudacionUten);
        printf("\nIngresa un Numero de DNI de la vecina:\n");
        scanf("%d", dni);

        totalPorVecina = 0;

        *recaudacionOllas = 0.00;
        *recaudacionSarten = 0.00;
        *recaudacionUten = 0.00;
    }
}

int main()
{

    int dni = 0, ventas = 0, vecinas = 0;
    char categoria, producto;
    float precio = 0.00, recaudacionOllas = 0.00, recaudacionSarten = 0.00, recaudacionUten = 0.00, totalVentas = 0.00;
    int ollas = 0, sartenes = 0, utencilios = 0;

    funcion1(&dni, &ventas, &vecinas, &categoria, &producto, &precio, &recaudacionOllas, &recaudacionSarten, &recaudacionUten, &totalVentas, &ollas, &sartenes, &utencilios);

    printf("\n--El total de vecinas procesadas es: %d\n", vecinas);

    if (ollas > sartenes && ollas > utencilios)
    {
        printf("\n--El producto más vendido fueron las Ollas\n");
    }
    else if (sartenes > ollas && sartenes > utencilios)
    {
        printf("\n--El producto más vendido fueron las Sartenes\n");
    }
    else if (utencilios > ollas && utencilios > sartenes)
    {
        printf("\n--El producto más vendido fueron los utencilios\n");
    }

    printf("\n--Se realizaron un total de %d ventas.\n\n", ventas);

    return 0;
}
