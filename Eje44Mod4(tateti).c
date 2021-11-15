#include <stdio.h>
#include <string.h>
#define DIM 3

void cargarTablero(char[][DIM], int);

void mostrarTablero(char[][DIM], int);

void ingresarDato(char[][DIM], int);

int validarEspacio(char[][DIM], int, int);

void definirDato(char[][DIM], int, int);

int revisarTablero(char[][DIM]);

int esGanador(char[][DIM]);

void jugar(char[][DIM]);

int main()
{

    char tablero[DIM][DIM];

    cargarTablero(tablero, DIM);

    mostrarTablero(tablero, DIM);

    jugar(tablero);

    return 0;
}

void cargarTablero(char tablero[][DIM], int tam)
{

    for (int i = 0; i <= 2; i++)
    {

        for (int j = 0; j <= 2; j++)
        {

            tablero[i][j] = '_';
        }
    }
}

void mostrarTablero(char tab[][DIM], int tam)
{

    printf("\nTablero actual:\n");

    for (int i = 0; i <= 2; i++)
    {
        printf("\t");

        for (int j = 0; j <= 2; j++)
        {

            printf("%c ", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void ingresarDato(char tab[][DIM], int dim)
{

    int i = 0, j = 0;

    printf("Por favor ingresa un numero de fila seguido por el número de columna donde quieres poner tu marca:\n***Ejemplo: la primer fila y primer columna sería 1, 1.\n");
    printf("\nIngresa la fila: ");
    scanf("%d", &i);

    i = i - 1;

    printf("\nIngresa la columna: ");
    scanf("%d", &j);

    j = j - 1;

    if (!validarEspacio(tab, i, j))
    {
        mostrarTablero(tab, dim);
        printf("\n*********************************************************************************\nLo sentimos: La casilla que seleccionaste está llena, por favor vuelve a elegir\n*********************************************************************************\n");
        ingresarDato(tab, dim);
    }
    else
    {
        definirDato(tab, i, j);
        mostrarTablero(tab, dim);
    }
}

int validarEspacio(char tab[][DIM], int i, int j)
{

    if (tab[i][j] != '_')
    {

        return 0;
    }
    else

        return 1;
}

void definirDato(char tab[][DIM], int i, int j)
{

    char marca;

    printf("\nIngresa tipo de marca X, ó O\n");
    fflush(stdin);
    scanf("%c", &marca);

    if (marca == 'x' || marca == 'X')
    {
        tab[i][j] = 'X';
    }
    else if (marca == 'o' || marca == 'O')
        tab[i][j] = 'O';
}

int revisarTablero(char tab[][DIM])
{
    int cont = 0;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (tab[i][j] != '_')
            {
                cont++;
            }
        }
    }

    if (cont >= 9)
    {
        return 1;
    }
    else
        return 0;
    ;
}

int esGanador(char tab[][DIM])
{

    if (tab[0][0] == 'X' && tab[0][1] == 'X' && tab[0][2] == 'X')
    {
        return 1;
    }
    else if (tab[1][0] == 'X' && tab[1][1] == 'X' && tab[1][2] == 'X')
    {
        return 1;
    }
    else if (tab[2][0] == 'X' && tab[2][1] == 'X' && tab[2][2] == 'X')
    {
        return 1;
    }
    else if (tab[0][0] == 'X' && tab[1][0] == 'X' && tab[2][0] == 'X')
    {
        return 1;
    }
    else if (tab[0][1] == 'X' && tab[1][1] == 'X' && tab[2][1] == 'X')
    {
        return 1;
    }
    else if (tab[0][2] == 'X' && tab[1][2] == 'X' && tab[2][2] == 'X')
    {
        return 1;
    }
    else if (tab[0][0] == 'X' && tab[1][1] == 'X' && tab[2][2] == 'X')
    {
        return 1;
    }
    else if (tab[2][0] == 'X' && tab[1][1] == 'X' && tab[0][2] == 'X')
    {
        return 1;
    }
    else if (tab[0][0] == 'O' && tab[0][1] == 'O' && tab[0][2] == 'O')
    {
        return 1;
    }
    else if (tab[1][0] == 'O' && tab[1][1] == 'O' && tab[1][2] == 'O')
    {
        return 1;
    }
    else if (tab[2][0] == 'O' && tab[2][1] == 'O' && tab[2][2] == 'O')
    {
        return 1;
    }
    else if (tab[0][0] == 'O' && tab[1][0] == 'O' && tab[2][0] == 'O')
    {
        return 1;
    }
    else if (tab[0][1] == 'O' && tab[1][1] == 'O' && tab[2][1] == 'O')
    {
        return 1;
    }
    else if (tab[0][2] == 'O' && tab[1][2] == 'O' && tab[2][2] == 'O')
    {
        return 1;
    }
    else if (tab[0][0] == 'O' && tab[1][1] == 'O' && tab[2][2] == 'O')
    {
        return 1;
    }
    else if (tab[2][0] == 'O' && tab[1][1] == 'O' && tab[0][2] == 'O')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;
}

void jugar(char tab[][DIM])
{

    while (!revisarTablero(tab))
    {
        ingresarDato(tab, DIM);
        if (esGanador(tab) == 1)
        {
            printf("\n*********************************\n\tTenemos un ganador!\n*********************************\n");
            break;
        }
    }
}
