#include<stdio.h>

void promedio(char*div,float*promedio,float*nota,int*cantA,int*cantB,int*cantC,int*cantidadNotas){

    int contadorA=0, contadorB=0, contadorC=0;

    /*el promedio de notas y las
cantidades parciales de alumnos de cada división.*/

    *promedio=(*nota / *cantidadNotas);

    if (*div=='a'|| *div=='A')
    {
        contadorA++;
    }else if (*div=='b'||*div=='B')
    {
       contadorB++;
    }else if (*div=='c'||*div=='C')
    {
        contadorC++;
    }
    
    *cantA=contadorA;
    *cantB=contadorB;
    *cantC=contadorC;
}

void procesar(char*div, int*legajo, float*nota, int*cantA,int*cantB,int*cantC, int*alumnos,float*promA,float*promB,float*promC){
/*procesar una cantidad desconocida de legajos de alumnos que finaliza con el
número 0. Por cada alumno se ingresarán la división a la que pertenece y una cantidad desconocida de notas.*/

int contadorNotas=0, contAlum=0;
    float acumNotas=0, prom=0;

printf("Ingresa un legajo\n");
scanf("%d",&*legajo);

    while (*legajo!=0)
    {  contAlum++;
        fflush(stdin);
        printf("Ingresa a que división pertenece\n");
        scanf("%c",&*div);
        printf("Ingresar una nota\n");
        scanf("%f",&*nota);
       acumNotas=acumNotas+(*nota);

        while (*nota!=0)
        {
               printf("Ingresar una nota\n");
                fflush(stdin);
        
             scanf("%f",&*nota);

             contadorNotas++;
             acumNotas=acumNotas+(*nota);

             promedio(&*div,&prom,&acumNotas,&*cantA,&*cantB,&*cantC,&contadorNotas);
        }

    
        printf("Alumno: %d\n",*legajo);
        printf("Promedio:%2.2f\n",prom);
        
    if (*div=='a'||*div=='A')
    {
        if ((*promA)<prom)
        {
            *promA=prom;
        }
        
      
    }else if (*div=='b'||*div=='B')
    {
          if ((*promB)<prom)
        {
            *promB=prom;
        }
        
    }else if (*div=='c'||*div=='C')
    {
           if ((*promC)<prom)
        {
            *promC=prom;
        }
        
    }
    
    *alumnos=contAlum;
        
        
        printf("Ingresa un legajo\n");
        scanf("%d",&*legajo);
        contadorNotas=0;
        acumNotas=0;
        
        prom=0;
    }

    


}


int main() {

    float notas=0, promedioA=0, promedioB=0, promedioC =0;
    int alumnos=0, legajo=0, cantA=0, cantB=0, cantC=0;

    char div;

    procesar(&div,&legajo,&notas,&cantA,&cantB,&cantC,&alumnos,&promedioA,&promedioB,&promedioC);


    printf("Total de alumnos procesados: %d\n", alumnos);

    printf("Cantidad total A:%d\n",cantA);
    printf("Cantidad total B:%d\n",cantB);
    printf("Cantidad total C:%d\n",cantC);

    if (promedioA>promedioB||promedioA>promedioC)
    {
         printf("El promedio mayor es la división A: %2.2f\n",promedioA);
    }else if (promedioB>promedioA||promedioB>promedioC)
    {
        printf("El promedio mayor es la división B: %2.2f\n",promedioB);
    }else if (promedioC>promedioB||promedioB>promedioA)
    {
        printf("El promedio mayor es la división C: %2.2f\n", promedioC);
    }
    
    

    /*a. Total de alumnos procesados
    b. La cantidad total de alumnos por división.
c    . Cuál es el mayor promedio de cada división.*/


    return 0;
}
