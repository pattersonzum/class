#include <stdio.h>

float promediar(int, int);

int main()
{
    /*Se pide hacer un programa para el profesor Jerman que pueda procesar información de sus alumnos. El programa debe:
    • Mostrar un menú de opciones. Las opciones son:
        ○ Calcular el promedio de notas para el legajo deseado
        ○ Dadas las notas de un legajo, saber si esta aprobado. La condición de aprobación es que todas las notas sean mayor a 4.
        ○ Salir del programa
    • El programa se ejecuta hasta que se elija la opción de Salir*/

    int opcion, leg, nota, cantNota = 0, acumNota = 0, aprob = 0;
    float prom = 0;

    printf("BIENVENIDO! \nELIGE UNA OPCIÓN DEL SIGUIENTE MENÚ:\n\n");
    printf("(1) para Calcular el promedio de notas para el legajo deseado.\n");
    printf("(2) para Dado un legajo, Saber si esta aprobado.\n");
    printf("(3) para Salir del programa\n\n");

    scanf("%d", &opcion);

    while (opcion != 3)
    {
        switch (opcion)
        {
        case 1:

            cantNota = 0;
            acumNota = 0;

            printf("\nIngresa un número de legajo: ");
            scanf("%d", &leg);

            while (leg < 1 || leg > 999999)
            {
                printf("\nLEGAJO NO VALIDO\n\n");
                printf("\nIngresa un número de legajo: ");
                scanf("%d", &leg);
            }

            printf("\nIngresa una nota para el alumno: ");
            scanf("%d", &nota);

            while (cantNota < 10 && nota != 0 && nota < 11)
            {

                acumNota += nota;
                cantNota++;

                printf("\nIngresa otra nota para el alumno: ");
                scanf("%d", &nota);
            }

            prom = promediar(acumNota, cantNota);

            printf("\nEL PROMEDIO PARA %d ES: %2.2f", leg, prom);

            cantNota = 0;

            break;

        case 2:
            //  ○ Dadas las notas de un legajo, saber si esta aprobado. La condición de aprobación es que todas las notas sean mayor a 4.

            acumNota = 0;

            printf("\nIngresa un número de legajo: ");
            scanf("%d", &leg);

            while (leg < 1 || leg > 999999)
            {
                printf("\nLEGAJO NO VALIDO\n\n");
                printf("\nIngresa un número de legajo: ");
                scanf("%d", &leg);
            }

            printf("\nIngresa una nota para el alumno: ");
            scanf("%d", &nota);

            while (cantNota < 10 && nota != 0 && nota < 11)
            {

                if (nota > 4)
                {
                    aprob = 0;
                }
                else
                {
                    aprob = 1;
                }
                acumNota += aprob;
                cantNota++;

                printf("\nIngresa otra nota para el alumno: ");
                scanf("%d", &nota);
            }
            cantNota = 0;

            if (acumNota != 0)
            {
                printf("\nEL ALUMNO %d DEBE RECURSAR.\n\n", leg);
            }
            else
            {
                printf("\nEL ALUMNO %d APROBÓ.\n\n", leg);
            }

            break;

        case 3:
            printf("(3) Salir del programa\n");

        default:
            printf("\nOPCIÓN NO VALIDA\n");

            break;
        }

        printf("\nELIGE NUEVAMENTE UNA OPCIÓN:\n\n");
        printf("(1) para Calcular el promedio de notas para el legajo deseado.\n");
        printf("(2) para Dado un legajo, Saber si esta aprobado.\n");
        printf("(3) para Salir\n\n");

        scanf("%d", &opcion);
    }

    return 0;
}

float promediar(int valorUno, int Valor2)
{

    float promedio = 0;

    promedio = valorUno / Valor2;

    return promedio;
}
