#include <stdio.h>
#include <math.h>

/*23) RECOMENDADO:Escribeunprogramateniendoencuentalassiguientesfunciones:
• leeOpcion lee la opción deseada y comprueba su validez
• menú muestra el menú en la pantalla
• cuadrado, circulo, rectángulo, trapecio, triángulo calculan la superficie
correspondiente.*/

int leerOpcion(int *);
void menu()
{
    printf("\n****** CÁLCULO DE SUPERFICIES ******\n1. Cuadrado (lado*lado)\n2. Círculo (pi*radio*radio)\n3. Rectángulo (base*altura)\n4. Trapecio (base1+base2)*altura/2)\n5. Triángulo (base*altura)/2)\n0. Salir del programa \n*************************************\n\n");
}
void cuadro()
{
    int a;
    printf("\n Escriba cuanto mide uno de sus lados: \n\n");
    scanf("%d", &a);
    printf("\n El área del cuadro es: %d \n\n", a * a);
}
void circulo()
{
    int a;
    printf("\n Escriba el radio del circulo:\n\n");
    scanf("%d", &a);
    printf("\n El área del círculo es: %2.2f \n\n", 3.1416 * a * a);
}
void rectangulo()
{
    int a, b;
    printf("\n Escriba la base y la altura: \n\n");
    scanf("%d%d", &a, &b);
    printf("\n El área del Rectángulo es: %d \n\n", a * b);
}
void trapecio()
{
    int a, b, c;
    printf("\n Ingresa las dos bases y la altura del trapecio: \n\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("\n El área del Trapecio es igual a: %d \n\n", (a + b) * c);
}
void triangulo()
{
    int a, b;
    printf("\n Escriba la base y la altura del triángulo: \n\n");
    scanf("%d%d", &a, &b);
    printf("\n El área del Tríangulo es: %d \n\n", (a * b) / 2);
}

int main()
{
    int opcion;
    menu();
    leerOpcion(&opcion);

    while (opcion != 0)
    {
        switch (opcion)
        {
        case 1:
            cuadro();
            break;
        case 2:
            circulo();
            break;
        case 3:
            rectangulo();
            break;
        case 4:
            trapecio();
            break;
        case 5:
            triangulo();
            break;

        default:
            printf("\n   Opción no Valida   \n\n");
            break;
        }
        menu();
        leerOpcion(&opcion);
    }

    return 0;
}

int leerOpcion(int *opcion)
{
    scanf("%d", &*opcion);
    return *opcion;
}
