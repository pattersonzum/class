#include <stdio.h>
#include <stdlib.h>


void calcularMayorAsistencia(int materia,float promedio, float *mayorPromedio, int*mayorAsist);

float promediar(int asistencia, int totalM,int totalF);

void calcularTotales(char gen, float asistencia, int*totalM, int*totalF, float*promedioAsist);

void procesar(int*totAlu,int*matMayorAsist);

int main()
{
    int totalAlumnos = 0, materiaMayorAsist = 0;

    procesar(&totalAlumnos,&materiaMayorAsist);
    printf("\n*****************************************\n");
    printf("\nEl Total de Alumnos procesados fue: %d \n",totalAlumnos);
    printf("La materia con mayor asistenfia promedio fue: %d",materiaMayorAsist);
    printf("\n*****************************************\n");
    return 0;
}



void calcularMayorAsistencia(int materia, float promedio, float* mayorPromedio, int*mayorAsist){

    if(promedio>(*mayorPromedio))
        (*mayorAsist)=materia+1;
        (*mayorPromedio)=promedio;


}

float promediar(int asistencia, int totalM,int totalF){

    int suma = totalM + totalF;


    return asistencia/(float)suma;


}

void calcularTotales(char gen, float asistencia, int*totalM, int*totalF, float*promedioAsist){


    switch(gen){

        case 'M':

            (*totalM)++;

            break;
        case 'm':

            (*totalM)++;

            break;
        case 'F':

            (*totalF)++;

            break;
        case 'f':

            (*totalF)++;

            break;

        default:

            break;
    }

    (*promedioAsist) = promediar(asistencia, *totalM,*totalF);

}

void procesar(int*totAlu,int*matMayorAsist){

    int i = 0, totalDias = 0, totalM = 0, totalF = 0, legajo = 0, dias=0;
    float asistProm = 0.0, asist = 0.0, asistenciaAcumulada = 0.0, mayorPromedio = 0.0;
    char gen;

    for(i=0;i<5;i++){

            totalDias = 0;
            totalM = 0;
            totalF = 0;
            asistProm = 0.0;
            asist = 0.0;
            asistenciaAcumulada = 0.0;


            printf("\n*****************************************\n");

            printf("\nIngresar el total de Dias de la cursada: ");
            scanf("%d",&totalDias);
            printf("\nIngresar un legajo de alumno: ");
            scanf("%d",&legajo);


            while(legajo){

                    dias = 0;

                    (*totAlu)++;

                    printf("\nIngresar el genero del alumno (M,F) : ");
                    fflush(stdin);
                    scanf("%c",&gen);

                    printf("\nIngresar la cantidad de dias que asistio a clase: ");
                    scanf("%d",&dias);

                    asist = (dias*100)/totalDias;
                    asistenciaAcumulada +=asist;

                    calcularTotales(gen, asistenciaAcumulada, &totalM, &totalF, &asistProm);

                    printf("\nIngresar un legajo de alumno: ");
                    scanf("%d",&legajo);

            }

            calcularMayorAsistencia(i,asistProm,&mayorPromedio,matMayorAsist);

             printf("\nMateria: %d \nGenero M: %d \nGenero F: %d\nAsistencia promedio: %.2f",i+1,totalM,totalF,asistProm);
    }

}
