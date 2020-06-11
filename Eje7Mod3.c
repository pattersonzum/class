#include <stdio.h>
#include <math.h>
//7) Desarrolle la función “menu” que muestre por pantalla 4 opciones, pida ingresar una de esas opciones y devuelva por resultado la opción elegida. La función debe validar que la opción ingresada sea valida 8si hay 4 opciones, no debo poder elegir la opción 6).

int menu(int);

int main()
{

    int valor = 0;

    printf("ingresaste la opción: %d\n", menu(valor));

    return 0;
}

int menu(int opcion)
{

    printf("Ingrea una opcion:\n(1)\n(2)\n(3)\n(4)\n");

    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        return opcion;
        break;

    case 2:
        return opcion;
        break;

    case 3:
        return opcion;
        break;

    case 4:
        return opcion;
        break;

    default:
        printf("Ingresaste la Opción No Valida\n");
        break;
    }

    return opcion;
}
