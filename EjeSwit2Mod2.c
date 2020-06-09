#include <stdio.h>
#include <math.h>

int main()
/*¿Puedes hacerlo de otra manera? Construye el programa sin utilizar switch.
2. Construir un programa que ingrese un carácter y determine si es una vocal.
3. Construir un programa que ingrese un carácter y determine si es número.
 65
 69
 73
 79
 85
 97
 101
 105
 111
 117
*/
{
    char unCaracter;
    printf(" Ingresá una letra... \n");
    scanf("%c",&unCaracter);
    
    if(unCaracter==65||unCaracter==69||unCaracter==73||unCaracter==79||unCaracter==85||unCaracter==97||unCaracter==101||unCaracter==105||unCaracter==111||unCaracter==117){
        printf("El caracter %c es una Vocal... \n\n",unCaracter);
    }else{
        printf("El caracter %c es Conconante... \n\n",unCaracter);
    }
    
}
