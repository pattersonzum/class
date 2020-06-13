#include <stdio.h>
#include <math.h>
//10) Desarrolle la función “areaRectangulo” que reciba 3 parámetros (base, altura y área) devolviendo el área en los parámetros.

int areaRectangulo (int, int);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a, b;
    printf("Ingresa dos valores iguales a los lados de un rectángulo para obtener su area\n");
    scanf("%d%d", &a, &b);
    
    printf("El area del Rectángulo es:%d\n",areaRectangulo(a, b));
    
    
    return 0;
}

int areaRectangulo (int a, int b){
    
    int c;
    
    c=a*b;
    
   return c;
    
}
