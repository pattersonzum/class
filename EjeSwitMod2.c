#include <stdio.h>
#include <math.h>

int main()
/*¿Puedes hacerlo de otra manera? Construye el programa sin utilizar switch.
2. Construir un programa que ingrese un carácter y determine si es una vocal.
3. Construir un programa que ingrese un carácter y determine si es número.
*/
{
             int x;
             float num;
             printf("(1) EL TRIPLE\n");
             printf("(2) EL CUADRADO\n");
             printf("(3) LOGARITMO NATURAL\n");
             printf("(4) LOGARITMO DECIMAL\n");
             printf("(5) SENO\n");
             printf("(6) COSENO\n");
             printf(" Escribe el numero de la opción que desees: \n");
             scanf("%d",&x);
             switch(x)
             {
                    case 1:
                           printf("Escribe el numero: \n");
                           scanf("%f",&num);
                           printf("El triple de %f es %f",num,3*num);
                            
                    case 2:
                           printf("Escribe el numero: \n");
                           scanf("%f",&num);
                           printf("El cuadrado de %f es %f",num,num*num);
                           break;
                    case 3:
                           printf("Escribe el numero: \n");
                           scanf("%f",&num);
                           printf("El logaritmo neperiano de %fes %f",num,log(num));
                           break;
                    case 4:
                           printf("Escribe el numero: \n");
                           scanf("%f",&num);
                           printf("El logaritmo decimal de %fes %f",num,log10(num));
                           break;
                    case 5:
                            printf("Escribe el numero: \n");
                            scanf("%f",&num);
                            printf("El seno de %f es %f",num,sin(num));
                            break;
    
                    case 6:
                            printf("Escribe el numero: \n");
                            scanf("%f",&num);
                            printf("El coseno de %f es %f",num,cos(num));
                            break;
                    default:
                            printf("Esto no es ninguna opción \n");
                            break;
                     
             }
    
}
