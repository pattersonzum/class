#include <stdio.h>

void totales(char *, float *, float *, float *, float *);
void procesar(char *, float *, float *, float *, float *, float *, int *);

int main()
{
    float costos = 0, costA = 0, costB = 0, costC = 0, montPub = 0;
    char etapas = 0;
    int publicidad = 0;

    procesar(&etapas, &costos, &costA, &costB, &costC, &montPub, &publicidad);

    if (costA > costB && costA > costC)
    {
        printf("La etapa de Preproducción es la más costosa: %7.2f\n", costA);
    }
    else if (costB > costA && costB > costC)
    {
        printf("La etapa de Producción es la más costosa: %7.2f\n", costB);
    }
    else
    {
        printf("La etapa de Postproducción es la más costosa: %7.2f\n", costC);
    }

    printf("La publicidad más economica fue la Nº %d, con un costo de %7.2f ", publicidad, montPub);

    return 0;
}

void totales(char *etapa, float *costo, float *costoTotalA, float *costoTotalB, float *costoTotalC)
{

    if (*etapa == 'A')
    {
        *costoTotalA = (*costoTotalA + *costo);
    }
    else if (*etapa == 'B')
    {
        *costoTotalB = (*costoTotalB + *costo);
    }
    else if (*etapa == 'C')
    {
        *costoTotalC = (*costoTotalC + *costo);
    }
}
void procesar(char *etapas, float *costos, float *costA, float *costB, float *costC, float *montoPub, int *Publicidad)
{
    float costPublicidad = 0, costoMenor = 10000000000;

    int i, contador = 0;
    printf("\nBienvenido... \nEsta función debe emitir por cada publicidad ingresada cuánto dinero costó por cada etapa que se procesan.\n\n");

    for (i = 1; i < 11; i++)
    {
        costPublicidad = 0;
        printf("\nPublicidad Noº %d.\n", i);
        printf("Ingresar etapa: A (Preproducción), B (Producción), C (Postproducción) o 'x' para salir.\n");
        fflush(stdin);
        scanf("%c", &*etapas);

        while (*etapas == 'A' || *etapas == 'B' || *etapas == 'C')
        {

            printf("Ingresar costo para la etapa:\n");

            scanf("%f", &*costos);
            totales(&*etapas, &*costos, &*costA, &*costB, &*costC);
            costPublicidad = costPublicidad + *costos;

            printf("Ingresar etapa: A, B, C o 'x' para salir.\n");
            fflush(stdin);
            scanf("%c", &*etapas);
        }

        contador++;
        if (costPublicidad < costoMenor)
        {
            costoMenor = costPublicidad;
            *Publicidad = contador;
        }
    }

    *montoPub = costPublicidad;
}


/*Una agencia de marketing necesita una aplicación para el proceso de sus publicidades realizadas y las etapas que involucraron. Para ello se reúne con usted y define un programa con la siguiente estructura:
1- Construir una función que permita procesar las 10 de publicidades que elaboran por mes. Por cada publicidad se
ingresan una cantidad desconocida de etapas. Por cada etapa se ingresa:
    a. Tipo de etapa: A (Preproducción), B (Producción), C (Postproducción) -carácter-
    b. Costo: número decimal
Esta función debe emitir por cada publicidad ingresada cuánto dinero costó por cada etapa que se procesan en la función 2. Ejemplo:
Total de publicidad: $15000 Preproducción: $6000 producción: $5000 Postproducción: $4000
 2- Construir una función que reciba al menos etapa y costo, y devuelva a la función 1 todos los totales de las etapas procesadas.
    3- En main el mensaje final que se emite debe mostrar:
    a. Qué tipo de etapa es la más costosa
    b. Qué publicidad fue la mas barata*/