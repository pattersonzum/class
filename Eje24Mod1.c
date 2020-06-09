#include <stdio.h>
#include <stdlib.h>

int main()
{
  //24. Construye un programa que permita ingresar 2 tiempos, expresados en horas, minutos y segundos, el mismo debe emitir por pantalla la suma de ambos (también en horas, minutos y segundos).

    
    int h,h2,m,m2,s,s2;
    
    printf("Introduzca un tiempo expresado en horas, minutos y segundos (separado con espacios sin puntos). ");
    scanf("%d%d%d",&h,&m,&s);
    
    printf("Introduzca otro tiempo expresado en horas, minutos y segundos (separado con espacios sin puntos) ");
    scanf("%d%d%d",&h2,&m2,&s2);
  
    printf("La suma de horas y minutos es %02d:%02d:%02d\n\n",h+h2, m+m2, s+s2);
    
    return 0;
}

