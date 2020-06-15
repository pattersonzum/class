#include <stdio.h>
#include <math.h>

/*23) RECOMENDADO:Escribeunprogramateniendoencuentalassiguientesfunciones:
• leeOpcion lee la opción deseada y comprueba su validez
• menú muestra el menú en la pantalla
• cuadrado, circulo, rectángulo, trapecio, triángulo calculan la superficie
correspondiente.*/

int leerOpcion(int);
void calculoSuper(int);
void menu()
{
    printf("\n******** CÁLCULO DE SUPERFICIES ******\n1. Cuadrado (lado*lado)\n2. Círculo (pi*radio*radio)\n3. Rectángulo (base*altura)\n4. Trapecio (base1+base2)*altura/2)\n5. Triángulo (base*altura)/2)\n0. Salir del programa \n************************************\n\n");
}

int main()
{
    int opcion;
    menu();
    scanf("%d", &opcion);
    calculoSuper(leerOpcion(opcion));
    return 0;
}

int leerOpcion(int opcion)
{
    return opcion;
}
void calculoSuper(int opcionMenu)
{
    int a, b, c;
    while (opcionMenu != 0)
    {
        switch (opcionMenu)
        {
        case 1:
            printf("\n Escriba cuanto mide uno de sus lados: \n\n");
            scanf("%d", &a);
            printf("\n El área del cuadro es:%d\n\n", a * a);
            break;
        case 2:
            printf("\n Escriba el radio del circulo:\n\n");
            scanf("%d", &a);
            printf("\n El área del círculo es:%f\n\n", 3.1416 * a * a);
            break;
        case 3:
            printf("\n Escriba la longitud de dos de sus lados: \n\n");
            scanf("%d%d", &a, &b);
            printf("\n El área del Rectángulo es:%d\n\n", a * b);
            break;
        case 4:
            printf("\n Ingresa las dos bases y la haltura del trapecio: \n");
            scanf("%d%d%d", &a, &b, &c);
            printf("\n El área del Trapecio es igual a: %d", (a + b) * c);
            break;
        case 5:
            printf("\n Escriba la base y la altura del triángulo: \n\n");
            scanf("%d%d", &a, &b);
            printf("\n El área del Tríangulo es:%d\n\n", (a * b) / 2);
            break;

        default:
            printf("\n   Opción no Valida   \n\n");
            break;
        }
        menu();
        scanf("%d", &opcionMenu);
    }
}
