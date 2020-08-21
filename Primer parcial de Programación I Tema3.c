#include <stdio.h>

void totales(int *, int *, char *, char *, float *, float *, float *, float *, float *, float *, float *, float *, float *, float *, float *, float *);
void procesar(int *, int *, char *, char *, float *, float *, float *, float *, float *, float *, float *);

int main()
{

    int id = 0, totalClientes = 0;
    char categoria, rating;
    float importe = 0.00, totalFactura = 0.00;
    float publicidadesB = 0.00, publicidadesR = 0.00, publicidadesM = 0.00;
    float platinum = 0.00, gold = 0.00;

    procesar(&id, &totalClientes, &categoria, &rating, &importe, &totalFactura, &publicidadesB, &publicidadesR, &publicidadesM, &platinum, &gold);

    printf("%7.2f", platinum);

    printf("\nTotal de clientes Procesados: %d\n", totalClientes);

    if (publicidadesB > publicidadesR && publicidadesB > publicidadesM)
    {
        printf("\nEl rating que dejó mayor ganancias es de publicidades buenas %7.2f\n", publicidadesB);
    }
    else if (publicidadesR > publicidadesB && publicidadesR > publicidadesM)
    {
        printf("\nEl rating que dejó mayor ganancias es de publicidades regulares %7.2f\n", publicidadesR);
    }
    else if (publicidadesM > publicidadesB && publicidadesM > publicidadesR)
    {
        printf("\nEl rating que dejó mayor ganancias es de publicidades malas %7.2f\n", publicidadesM);
    }

    if (platinum > gold)
    {
        printf("\nLa categoria más lucrativia es la Platinum: %7.2f\n", platinum);
    }else
    {
        printf("\nLa categoria más lucrativia es la gold: %7.2f\n", gold);
    }
    

    return 0;
}

void totales(int *id, int *totalClientes, char *categoria, char *rating, float *importe, float *totalFactura, float *publicidadesB, float *publicidadesR, float *publicidadesM, float *platinum, float *gold, float *acumB, float *acumR, float *acumM, float *acumP, float *acumG)
{

    if (*categoria == 'P' || *categoria == 'p')
    {
        *acumP = *acumP + *importe;
    }
    else if (*categoria == 'G' || *categoria == 'g')
    {
        *acumG = *acumG + *importe;
    }

    if (*rating == 'b' || *rating == 'B')
    {
        *acumB = *acumB + *importe;
    }
    else if (*rating == 'r' || *rating == 'R')
    {
        *acumR = *acumR + *importe;
    }
    else if (*rating == 'm' || *rating == 'M')
    {
        *acumM = *acumM + *importe;
    }

    *publicidadesB = *acumB;
    *publicidadesR = *acumR;
    *publicidadesM = *acumM;
    *platinum = *acumP;
    *gold = *acumG;
    *totalFactura = *acumB + *acumR + *acumM;
}

void procesar(int *id, int *totalClientes, char *categoria, char *rating, float *importe, float *totalFactura, float *publicidadesB, float *publicidadesR, float *publicidadesM, float *platinum, float *gold)
{
    int pub, contClient = 0, cliente = 0;
    float acumB = 0.00, acumR = 0.00, acumM = 0.00, acumP = 0.00, acumG = 0.00;

    printf("\nIngresa ID\n");
    scanf("%d", &cliente);

    while (cliente != 0)
    {
        *id = cliente;
        printf("\nIngresa categoria\n");
        fflush(stdin);
        scanf("%c", &*categoria);
        printf("\nIngresa publicidad\n");
        scanf("%d", &pub);

        while (pub != 0)
        {
            printf("\nIngresa rating\n");
            fflush(stdin);
            scanf("%c", &*rating);
            printf("\nIngresa importe\n");
            scanf("%f", &*importe);

            totales(&*id, &*totalClientes, &*categoria, &*rating, &*importe, &*totalFactura, &*publicidadesB, &*publicidadesR, &*publicidadesM, &*platinum, &*gold, &acumB, &acumR, &acumM, &acumP, &acumG);

            printf("\nIngresa publicidad\n");
            scanf("%d", &pub);
        }

        printf("\nTotal de publicidades del cliente %d: %7.2f\n", cliente, *totalFactura);
        printf("\nPublicidades buenas: %7.2f\n", acumB);
        printf("\nPublicidades regulares: %7.2f\n", acumR);
        printf("\nPublicidades malas: %7.2f\n", acumM);

        /*Total de publicidades del cliente 64: $10.000
        Publicidades buenas: $2.000
        Publicidades regulares: $3.000
        Publicidades malas: $4.000*/

        printf("\nIngresa ID\n");
        scanf("%d", &cliente);
        acumB = 0.00;
        acumR = 0.00;
        acumM = 0.00;
        acumP = 0.00;
        acumG = 0.00;
        contClient++;
    }
    *totalClientes = contClient;
}
