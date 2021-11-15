#include <stdio.h>
#include <stdlib.h>

void promediar(int*acumNota,char division,float*promedio,int*aluDivA,int*aluDivB,int*aluDivC,float contadorNota);

void calcularMayorPromedio(float*mayorPromA,float*mayorPromB,float*mayorPromC,float promedio, char div);

void procesarLegajos(int*totAl,int*aluDivA,int*aluDivB,int*aluDivC,float*mayorPromA,float*mayorPromB,float*mayorPromC);

int main()
{

    int totalAlumnos = 0, aluDivA = 0, aluDivB = 0, aluDivC = 0;
    float mayorPromA = 0, mayorPromB = 0, mayorPromC = 0;

    procesarLegajos(&totalAlumnos,&aluDivA,&aluDivB,&aluDivC,&mayorPromA,&mayorPromB,&mayorPromC);


    printf("Total de alumnos procesados %d\n",totalAlumnos);
    printf("Cantidad total de alumnos de la division A %d\n",aluDivA);
    printf("Cantidad total de alumnos de la division B %d\n",aluDivB);
    printf("Cantidad total de alumnos de la division C %d\n",aluDivC);
    printf("Mayor promedio de la division A  %.2f\n",mayorPromA);
    printf("Mayor promedio de la division B  %.2f\n",mayorPromB);
    printf("Mayor promedio de la division C  %.2f\n",mayorPromC);

    return 0;
}


void promediar(int*acumNota,char division,float*promedio,int*aluDivA,int*aluDivB,int*aluDivC,float contadorNota){


    switch(division){

        case 'A':
            (*aluDivA)++;

            (*promedio)=((*acumNota)/(contadorNota));

            break;

        case 'a':
            (*aluDivA)++;

            (*promedio)=((*acumNota)/(contadorNota));

            break;

        case 'B':
            (*aluDivB)++;

            (*promedio)=((*acumNota)/(contadorNota));

            break;

        case 'b':
            (*aluDivB)++;

            (*promedio)=((*acumNota)/(contadorNota));

            break;


        case 'C':
            (*aluDivC)++;

            (*promedio)=(*acumNota)/(contadorNota);

            break;

        case 'c':
            (*aluDivC)++;

            (*promedio)=(*acumNota)/(contadorNota);

            break;

        default:

            break;

    }

}

void calcularMayorPromedio(float*mayorPromA,float*mayorPromB,float*mayorPromC,float promedio, char div){

    switch (div) {
        case 'A':
            if (promedio >(*mayorPromA)) {
                (*mayorPromA)=promedio;
            }
            break;
        case 'a':
            if (promedio>(*mayorPromA)) {
                (*mayorPromA)=promedio;
            }
            break;
        case 'B':
            if (promedio>(*mayorPromB)) {
                (*mayorPromB)=promedio;
            }
            break;
        case 'b':
            if (promedio>(*mayorPromB)) {
                (*mayorPromB)=promedio;
            }
            break;
        case 'C':
            if (promedio>(*mayorPromC)) {
                    (*mayorPromC)=promedio;
            }
            break;
        case 'c':
            if (promedio>(*mayorPromC)) {
                    (*mayorPromC)=promedio;
            }
            break;


        default:
            break;
    }

}

void procesarLegajos(int*totAl,int*aluDivA,int*aluDivB,int*aluDivC,float*mayorPromA,float*mayorPromB,float*mayorPromC){

    int legajo = 0, nota = 0, acumNota = 0;
    float contadorNota = 0;
    char division;
    float promedio =0;

    printf("\n\t\t******* Parcial 1 ******\n");

    printf("Ingresar un legajo o cero \"0\" para salir del programa:\n");
    scanf("%d",&legajo);

    while(legajo!= 0){

            (*totAl)++;
            contadorNota=0;
            acumNota=0;

            printf("\nIngresar a que division pertenece (A,B,C)\n\n");
            fflush(stdin);
            scanf("%c",&division);
            printf("Ingresar una nota mayor a cero o ingresa \"0\" para salir: ");
            scanf("%d",&nota);
            acumNota+=nota;

            while(nota!=0){

                printf("Ingresar una nota mayor a cero o ingresa \"0\" para salir: ");
                scanf("%d",&nota);

                acumNota+=nota;
                contadorNota++;
            }

            promediar(&acumNota,division,&promedio,aluDivA,aluDivB,aluDivC,contadorNota);

            printf("\nEl promedio para Legajo: #%d : es de %.2f\n",legajo,promedio);


            calcularMayorPromedio(mayorPromA,mayorPromB,mayorPromC,promedio,division);

            printf("\nIngresar un legajo o cero \"0\" para salir del programa\n");
            scanf("%d",&legajo);


    }

}
