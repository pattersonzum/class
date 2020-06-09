#include <stdio.h>
#include <math.h>

int main()
//Pedro invierte u$s 100 a una tasa del 8% anual. Jorge invierte u$s 150 al 5% anual. ¿Después de cuántos años la cuenta de Pedro rebasará a la de Jorge?
{
    int pedro,jorge,años;
    
    jorge=150;
    pedro=100;
    años=0;
    do
    {
    printf("Pedro tiene %dUSD, Y jorge %dUSD\n", pedro, jorge);
        pedro=pedro*1.08;
        jorge=jorge*1.05;
        años++;
        printf("%d años\n",años);
    }
    while(pedro<jorge);
    
    printf("A los %d años Pedro superó a Jorge en ahorros.\n",años);
}

