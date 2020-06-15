#include <stdio.h>
#include <stdlib.h>
//17) Luego, análogo al punto anterior, desarrollen un función int ordenarMenor(int* v1, int* v2, int*v3).

int OrdenarMenor(int*,int*,int*);

int main(){
    int valor1, valor2, valor3;
    
    printf("\nIngresar tres valores para ordenarlos de mayor a menor: \n\n");
    scanf("%d %d %d",&valor1,&valor2,&valor3);
    
   OrdenarMenor(&valor1, &valor2, &valor3);
    
    printf("%d, %d, %d\n\n",valor1,valor2,valor3);
    
    
    return 0;
}



int OrdenarMenor(int* v1, int* v2, int* v3){
    int val1, val2, val3;
    
    if ((*v1>*v2 && *v1>*v3)&&(*v2>*v3)) {
        
        *v1=*v1;
        *v2=*v2;
        *v3=*v3;
        
        
    }else if ((*v2>*v1 && *v2>*v3)&&(*v1>*v3)){
        
        val1=*v1;
        val2=*v2;
        
        *v1=val2;
        *v2=val1;
        *v3=*v3;
        
        
    }else if ((*v1<*v2 && *v1<*v3)&&(*v2<*v3)){
        
        val1=*v1;
        val3=*v3;
        
        *v1=val3;
        *v2=*v2;
        *v3=val1;
       
        
    }else if ((*v3>*v1 && *v3>*v2)&&(*v1>*v2)){
        
        val1=*v1;
        val2=*v2;
        val3=*v3;
    
        *v1=val3;
        *v2=val1;
        *v3=val2;
      
        
    }else if ((*v2>*v1 && *v2>*v3)&&(*v3>*v1)) {
        
        val1=*v1;
        val2=*v2;
        val3=*v3;
        
        *v1=val2;
        *v2=val3;
        *v3=val1;
      
        
    }else  {
       
        val2=*v2;
        val3=*v3;
    
        *v1=*v1;
        *v2=val3;
        *v3=val2;
        

    }
    return 0;
}
