#include <stdio.h>
#include <stdlib.h>

void calcularTotalesEspecialidad(int inf, int mec, int el, int*informatica,int*mecanica,int*electronica);
void calcularMejorasistencia(int legajo, int asistencia, int*mejorAsistencia);
void calcularTotales(char especialidad, int legajo,int asistencia, int *totalInf, int *totalMec, int *totalEl,int*mejorAsitencia);
void procesarProfesores(int*total,int*totIn,int*totMec,int*totEl);


int main()
{
    int totalProfesores =0, cantProfInt = 0, cantProfMec = 0, cantProfEl= 0;

    procesarProfesores(&totalProfesores,&cantProfInt,&cantProfMec,&cantProfEl);

    printf("\n*********************\n");
    printf("\nTotal de profesores procesados: %d\n",totalProfesores);
    printf("Total de profesores Informatica: %d\n",cantProfInt);
    printf("Total de profesores Mecanica: %d\n",cantProfMec);
    printf("Total de profesores Electronica: %d\n",cantProfEl);
    return 0;
}

void calcularTotalesEspecialidad(int inf, int mec, int el, int*informatica,int*mecanica,int*electronica){

    (*informatica)+=inf;
    (*mecanica)+=mec;
    (*electronica)+=el;

}

void calcularMejorasistencia(int legajo, int asistencia, int*mejorAsistencia){

    if (asistencia>(*mejorAsistencia))

        (*mejorAsistencia)=legajo;

}

void calcularTotales(char especialidad, int legajo,int asistencia, int *totalInf, int *totalMec, int *totalEl,int*mejorAsitencia){

    switch(especialidad){

    case 'I':
        (*totalInf)++;
        break;

    case 'i':
        (*totalInf)++;
        break;

    case 'M':
        (*totalMec)++;
        break;

    case 'm':
        (*totalMec)++;
        break;

    case 'E':
        (*totalEl)++;
        break;

    case 'e':
        (*totalEl)++;
        break;

    default:

        break;

    }

    calcularMejorasistencia(legajo,asistencia,mejorAsitencia);

}


void procesarProfesores(int*total,int*totIn,int*totMec,int*totEl){

    int i = 0, legajo = 0, asistencia = 0,  totalInf = 0, totalMec = 0,  totalEl = 0, mejorAsitencia = 0;

    char especialidad;

    printf("\n********** Bienvenido al programa para procesar escuelas ***********\n");
    printf("\nPara comenzar vamos a procesar los legajos de cada profesor o '0' para pasar a la siguiente escuela\n");

    for(i=0;i<4;i++){

            totalInf = 0;
            totalMec = 0;
            totalEl = 0;
            mejorAsitencia = 0;

            printf("\nIngresa los datos para la escuela %d: \n",i+1);

            printf("\nIngresar el legajo de un profesor: ");

            scanf("%d",&legajo);

            while(legajo){

                    asistencia = 0;
                    (*total)++;

                    printf("\nIngresar La especialidad: ");
                    fflush(stdin);
                    scanf("%c",&especialidad);
                    printf("\nIngresar la asistencia: ");
                    scanf("%d",&asistencia);

                    calcularTotales( especialidad, legajo, asistencia, &totalInf, &totalMec, &totalEl, &mejorAsitencia);

                    printf("\n*********************\n");
                    printf("\nIngresar el legajo de un profesor: \n");
                    scanf("%d",&legajo);

            }

            calcularTotalesEspecialidad(totalInf,totalMec,totalEl,totIn,totMec,totEl);

            printf("\nProfesores de la escuela %d: ",i+1);
            printf("\nInformatica: %d  Mecanica: %d  Electronica: %d",totalInf,totalMec,totalEl);
            printf("\nMejor asitencia legajo: %d",mejorAsitencia);
            printf("\n-------------------------------------------------------\n");

    }

}


