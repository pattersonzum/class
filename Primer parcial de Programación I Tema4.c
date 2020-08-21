#include <stdio.h>

void procesar(int *, int *, int *, int *, int *, int *, int *, char *, float *, float *, float *, float *, float *, float *, float *);
void promediar(int *, int *, int *, int *, int *, int *, int *, char *, float *, float *, float *, float *, float *, float *, float *, float *);

int main()
{

    int materia = 0, dia = 0, alumno = 0, diasAsist = 0, totalF = 0, totalM = 0, totalAlumnos = 0;
    char genero;
    float promedioAsist = 0.00, mayorAsist = 0.00, mat1Prom = 0.00, mat2Prom = 0.00, mat3Prom3 = 0.00, mat4Prom = 0.00, mat5Prom = 0.00;

    procesar(&materia, &dia, &alumno, &diasAsist, &totalF, &totalM, &totalAlumnos, &genero, &promedioAsist, &mayorAsist, &mat1Prom, &mat2Prom, &mat3Prom3, &mat4Prom, &mat5Prom);

    printf("\nTotal de alumnos procesados: %d\n", totalAlumnos);

    if (mat1Prom == mayorAsist)
    {
        printf("\nLa materia 1 tiene mejor promedio de asistencia\n");
    }
    else if (mat2Prom == mayorAsist)
    {
        printf("\nLa materia 2 tiene mejor promedio de asistencia\n");
    }
    else if (mat3Prom3 == mayorAsist)
    {
        printf("\nLa materia 3 tiene mejor promedio de asistencia\n");
    }
    else if (mat4Prom == mayorAsist)
    {
        printf("\nLa materia 4 tiene mejor promedio de asistencia\n");
    }
    else
    {
        printf("\nLa materia 5 tiene mejor promedio de asistencia\n");
    }

    return 0;
}

void promediar(int *materia, int *dia, int *alumno, int *diasAsist, int *totalF, int *totalM, int *totalAlumnos, char *genero, float *promedioAsist, float *mayorAsist, float *mat1Prom, float *mat2Prom, float *mat3Prom3, float *mat4Prom, float *mat5Promint, float *acumula)
{

    if (*genero == 'M' || *genero == 'm')
    {
        *totalM = *totalM + 1;
    }
    else if (*genero == 'F' || *genero == 'f')
    {
        *totalF = *totalF + 1;
    }

    *acumula = *acumula + *diasAsist;

    *promedioAsist = (*acumula / *alumno / *dia) * 100;
}

void procesar(int *materia, int *dia, int *alumno, int *diasAsist, int *totalF, int *totalM, int *totalAlumnos, char *genero, float *promedioAsist, float *mayorAsist, float *mat1Prom, float *mat2Prom, float *mat3Prom3, float *mat4Prom, float *mat5Prom)
{

    int i = 0, legajo = 0, contAlu = 0;
    float acumula = 0;

    for (i = 1; i < 6; i++)
    {
        *materia = i;
        printf("\nIngresa el total de días de cursada\n");
        scanf("%d", &*dia);
        printf("\nIngresa el legajo del alumno\n");
        scanf("%d", &legajo);

        while (legajo != 0)
        {
            contAlu++;
            *alumno = *alumno + 1;

            printf("\nIngresa el genero:\n");
            fflush(stdin);
            scanf("%c", &*genero);

            printf("\nIngresa los dias que asistió a clase\n");
            scanf("%d", &*diasAsist);

            promediar(&*materia, &*dia, &*alumno, &*diasAsist, &*totalF, &*totalM, &*totalAlumnos, &*genero, &*promedioAsist, &*mayorAsist, &*mat1Prom, &*mat2Prom, &*mat3Prom3, &*mat4Prom, &*mat5Prom, &acumula);

            printf("\nIngresa el legajo del alumno\n");
            scanf("%d", &legajo);
        }

        if (*materia == 1)
        {
            *mat1Prom = *promedioAsist;
        }
        else if (*materia == 2)
        {
            *mat2Prom = *promedioAsist;
        }
        else if (*materia == 3)
        {
            *mat3Prom3 = *promedioAsist;
        }
        else if (*materia == 4)
        {
            *mat4Prom = *promedioAsist;
        }
        else if (*materia == 5)
        {
            *mat5Prom = *promedioAsist;
        }

        printf("\nMateria# %d \n", *materia);
        printf("\nGenero M: %d genero F: %d", *totalM, *totalF);
        printf("\nAsistencia Promedio: %2.2f\n", *promedioAsist);

        *alumno = 0;
        *totalF = 0;
        *totalM = 0;
        acumula = 0;

        if (*mat1Prom > *mayorAsist)
        {
            *mayorAsist = *mat1Prom;
        }
        else if (*mat2Prom > *mayorAsist)
        {
            *mayorAsist = *mat2Prom;
        }
        else if (*mat3Prom3 > *mayorAsist)
        {
            *mayorAsist = *mat3Prom3;
        }
        else if (*mat4Prom > *mayorAsist)
        {
            *mayorAsist = *mat4Prom;
        }
        else if (*mat5Prom > *mayorAsist)
        {
            *mayorAsist = *mat5Prom;
        }
    }

    *totalAlumnos = contAlu;
}
