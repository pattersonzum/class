//21) Escribeunafunciónquerecibacomoparámetrosdeentradaunvalorenteroycompruebesise encuentra comprendido entre dos valores constantes MIN y MAX definidos dentro de la propia función.
#include<stdio.h>

int funcionMinMax(int num){

    if (num>0 && num<11)
    {
       return 1;
      
    }else
    {
        return 0;
      
    }

}

int main(){

    int x=12;

   printf("%d\n",funcionMinMax(x));

    return 0;
}