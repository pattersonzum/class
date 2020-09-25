#include <stdio.h>
#define DIM 10

void invertirOrden(int vect[], int unNum);

void cargar(int vect[], int unNum);

int leerMarca(int vect[]);

int veces(int valor, int vect[], int unNum);

int main()
{

    int vector[DIM];
    int valor = 0;
    int opcion = 0;

    printf("Ingrese un numero de funcion a probar: ");
    printf("\n(1) para cargar\n(2) leer Marca\n(3) Cuantas veces se repite\n(4) Invertir Vector:\n");
    scanf("%d", &opcion);
    fflush(stdin);

    while (opcion != 0)
    {

        switch (opcion)
        {
        case 1:
            cargar(vector, DIM);
            printf("Ingrese un numero de funcion a probar: ");
            scanf("%d", &opcion);
            break;

        case 2:
            printf("Se leyeron %d elementos\n", leerMarca(vector));
            printf("Ingrese un numero de funcion a probar: ");
            scanf("%d", &opcion);
            break;

        case 3:
            printf("\nIngresa un valor para saber cuantas veces se repite\n");
            scanf("%d", &valor);
            printf("El %d se repite %d veces\n", valor, veces(valor, vector, DIM));
            printf("Ingrese un numero de funcion a probar: ");
            scanf("%d", &opcion);
            break;

        case 4:
            invertirOrden(vector, DIM);
            printf("\nEl vector invertido:\n");
            for (int i = 0; i < DIM; i++)
            {
                printf("%d,", vector[i]);
            }
            printf("\nIngrese un numero de funcion a probar: ");
            scanf("%d", &opcion);
            break;
        default:
            break;
        }
    }

    return 0;
}

void cargar(int *vect, int num)
{

    for (int i = 0; i < num; i++)
    {
        printf("\ningresa un numero\n");
        scanf("%d", &(vect[i]));
    }
}

int leerMarca(int vect[])
{
    int a = 9, i = 0;
    int contador = 0;

    while (vect[i] != a)
    {
        i++;
        contador++;
    }

    return contador;
}

int veces(int valor, int vect[], int unNum)
{
    int contador = 0;

    for (int i = 0; i < unNum; i++)
    {
        if (vect[i] == valor)
        {
            contador++;
        }
    }

    return contador;
}

void invertirOrden(int vect[], int unNum)
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, y = 0, j = 0;

    for (int i = 0; i < unNum; i++)
    {
        if (i == 0)
        {
            a = vect[i];
        }
        else if (i == 1)
        {
            b = vect[i];
        }
        else if (i == 2)
        {
            c = vect[i];
        }
        else if (i == 3)
        {
            d = vect[i];
        }
        else if (i == 4)
        {
            e = vect[i];
        }
        else if (i == 5)
        {
            f = vect[i];
        }
        else if (i == 6)
        {
            g = vect[i];
        }
        else if (i == 7)
        {
            h = vect[i];
        }
        else if (i == 8)
        {
            y = vect[i];
        }
        else
        {
            j = vect[i];
        }
    }

    for (int i = 0; i < DIM; i++)
    {

        if (i == 0)
        {
            vect[i] = j;
        }
        else if (i == 1)
        {
            vect[i] = y;
        }
        else if (i == 2)
        {
            vect[i] = h;
        }
        else if (i == 3)
        {
            vect[i] = g;
        }
        else if (i == 4)
        {
            vect[i] = f;
        }
        else if (i == 5)
        {
            vect[i] = e;
        }
        else if (i == 6)
        {
            vect[i] = d;
        }
        else if (i == 7)
        {
            vect[i] = c;
        }
        else if (i == 8)
        {
            vect[i] = b;
        }
        else
        {
            vect[i] = a;
        }
    }
}
