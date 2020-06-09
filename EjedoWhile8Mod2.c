#include <stdio.h>
#include <math.h>

int main()
// La población actual de una colonia de insectos “A” es de 55 millones y crece a una tasa del 7 % anual. La población de otra colonia “B” es de 250 millones y crece a razón de un 2% anual. Si estas dos colonias mantuvieran su ritmo de crecimiento actual; ¿en cuántos años la población “A” será la mitad de la población “B”?
{
    int A,B,años;
    
    A=55000000;
    B=250000000;
    años=0;
  
    do
    {
    printf("Población A = %d, Población B = %d\n", A, B);
        A=A*1.07;
        B=B*1.02;
        años++;
        printf("%d años\n",años);
    }
    while(A<=(B/2));
    printf("La población A es igual a la mitad de la población B\n");
}

