#include <stdio.h>
//Se ingresa por cada empleado un número de sueldos correspondiente a tres sectores donde realizan tareas distintas. Alguno de ellos puede ser cero, lo que significa que no realizan tareas en ese sector.

void porcent(int *, int *, int *, int);

int promedioEdad(int, int);

int main()
{

    int legajo = 0, edad = 0, cantEmpleados = 0, f = 0, m = 0, o = 0, mayorEdad = 0, EmpleadoMasculinoMayorEdad = 0, sumEdad;
    float sueldo = 0.00, sueldo1 = 0.00, sueldo2 = 0.00;
    char genero;

    printf("\nIngresa un número de Legajo (ó -1 para salir)\n");
    scanf("%d", &legajo);

    while (legajo != (-1))
    {

        while (legajo < 1200 || legajo > 4000)
        {
            printf("\nEl legajo no pertenece a un empleado.\nEscribir un número de legajo entre 1200 a 4000\n");
            scanf("%d", &legajo);
        }

        printf("\nIngresa la edad.\n");
        scanf("%d", &edad);
        fflush(stdin);
        printf("\nIngresa la Genero. (m/f/o)\n");
        scanf("%c", &genero);

        printf("\nIngresa el sueldo percibido para el empleado en el sector finanzas.\n");
        scanf("%f", &sueldo);

        printf("\nIngresa el sueldo percibido para el empleado en el sector RRHH.\n");
        scanf("%f", &sueldo1);

        printf("\nIngresa el sueldo percibido para el empleado en el sector Legales.\n");
        scanf("%f", &sueldo2);

        cantEmpleados++;

        if (genero == 'f')
        {
            f++;
        }
        else if (genero == 'm')
        {
            m++;
        }
        else if (genero == 'o')
        {
            o++;
        }

        if (edad > mayorEdad && genero == 'm')
        {
            EmpleadoMasculinoMayorEdad = legajo;
        }
        sumEdad= sumEdad+edad;

        printf("\nIngresa un número de Legajo (ó -1 para salir)\n");
        scanf("%d", &legajo);
    }

    porcent(&f, &m, &o, cantEmpleados);
    printf("El porcentaje de Mujeres es: %d \nEl porcentaje de hombres: %d", f, m);

    printf("\nLa edad promedio de los empelados es %d \n", promedioEdad(sumEdad, cantEmpleados));

    printf("\nEl empleado de mayor edad es: %d \n", EmpleadoMasculinoMayorEdad);

    return 0;
}

void porcent(int *fem, int *mal, int *oth, int empleados)
{

    *fem = (*fem * 100) / empleados;
    *mal = (*mal * 100) / empleados;
    *oth = (*oth * 100) / empleados;
}

int promedioEdad(int promEd, int empelados)
{
    int edadPromedio = 0;

    edadPromedio = promEd / empelados;

    return edadPromedio;
}
