#include <stdio.h>
#define DIM 10
float prom(int *, int );

int min(int *, int );

int suma(int *, int );

void invertirOrden(int *, int );

void cargar(int *, int );

int leerMarca(int *);

int veces(int , int *, int );

int main()
{
    
    int vector[DIM];
    int valor = 0;
    int opcion = 0;
    
    printf("Ingrese un numero de funcion a probar: ");
    printf("\n(1) para cargar\n(2) leer Marca\n(3) Cuantas veces se repite\n(4) Invertir Vector:\n(5) Suma\n(6) Minimo\n(7) Promedio\n");
    scanf("%d", &opcion);
    fflush(stdin);
    
    while (opcion != 0)
    {
        
        switch (opcion)
        {
                
            case 1:
                //Cargar m elementos de un vector por teclado. Deberá considerar que no podrá superar el máximo de elementos de vector
                cargar(vector, DIM);
                printf("Ingrese un numero de funcion a probar: ");
                scanf("%d", &opcion);
                break;
                
            case 2:
                //Leer elementos de un vector hasta encontrar el número entero a. Deberá retornar el número de elementos que ha leído sin contar el entero a.
                printf("Se leyeron %d elementos\n", leerMarca(vector));
                printf("Ingrese un numero de funcion a probar: ");
                scanf("%d", &opcion);
                break;
                
            case 3:
                //  Dado un elemento y dado un vector de enteros, desarrolle una función que devuelva el número de apariciones del elemento en el vector.
                printf("\nIngresa un valor para saber cuantas veces se repite\n");
                scanf("%d", &valor);
                printf("El %d se repite %d veces\n", valor, veces(valor, vector, DIM));
                printf("Ingrese un numero de funcion a probar: ");
                scanf("%d", &opcion);
                break;
                
            case 4:
                //Invertir los elementos del vector sin utilizar otro vector. Por ejemplo, el vector formado por los enteros: 1 2 3, debe quedar 3 2 1.
                invertirOrden(vector, DIM);
                printf("\nEl vector invertido:\n");
                for (int i = 0; i < DIM; i++)
                {
                    printf("%d,", vector[i]);
                }
                printf("\nIngrese un numero de funcion a probar: ");
                scanf("%d", &opcion);
                break;
                
            case 5:
                //a) Calcular y emitir la suma de sus elementos.
                printf("\nLa suma de los elementos del vetor es: %d\n",suma(vector, DIM));
                
                printf("\nIngrese un numero de funcion a probar: ");
                scanf("%d", &opcion);
                break;
                
            case 6:
                //b) Calcular y emitir el mínimo del vector.
                
                printf("\nEl menor es: %d\n",min(vector, DIM));
                printf("\nIngrese un numero de funcion a probar: ");
                scanf("%d", &opcion);
                break;
                
            case 7:
                //Calcular y emitir el promedio de los valores del vector
                printf("\nEl promedio del vector es: %7.2f\n",prom(vector,  DIM));
                printf("\nIngrese un numero de funcion a probar: ");
                scanf("%d", &opcion);
                break;
            default:
                break;
        }
    }
    
    return 0;
}

//Cargar m elementos de un vector por teclado. Deberá considerar que no podrá superar el máximo de elementos de vector

void cargar(int *vect, int num)
{
    
    for (int i = 0; i < num; i++)
    {
        printf("\ningresa un numero\n");
        scanf("%d", &(vect[i]));
    }
}
//Leer elementos de un vector hasta encontrar el número entero a. Deberá retornar el número de elementos que ha leído sin contar el entero a.
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

//Dado un elemento y dado un vector de enteros, desarrolle una función que devuelva el número de apariciones del elemento en el vector.

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
//Invertir los elementos del vector sin utilizar otro vector. Por ejemplo, el vector formado por los enteros: 1 2 3, debe quedar 3 2 1.
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
//a) Calcular y emitir la suma de sus elementos.
int suma(int vect[], int tam){
    int x =0, i=0;
    
    for (i=0; i<tam; i++) {
        x=x+vect[i];
    }
    
    return x;
}
//b) Calcular y emitir el mínimo del vector.

int min(int vector[], int tam){
    
    int i;
    int a=1000000000;
    
    for (i=0; i<tam; i++){
        if (vector[i]<a){
            a=vector[i];
        }
        
    }
    
    return a;
}
//Calcular y emitir el promedio de los valores del vector

float prom(int *vector,int tam){
    float avar=0.00;
    int acum=0;
    
    for (int i=0; i<tam; i++) {
        acum=acum+vector[i];
    }
    
    avar=acum/tam;
    
    return avar;
}
