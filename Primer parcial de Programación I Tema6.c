#include <stdio.h>

void totales(int*leg,int*asistencia,int*mejorasi,int*totalInfo,int*totalMeca,int*totalEle,char*especial,int*acuInfo,int*acuMeca,int*acuEle,int*legajoMejor){
    
    if (*especial=='i') {
        *totalInfo= *totalInfo+1;
        *acuInfo = *acuInfo+1;
    }else if (*especial=='m'){
        *totalMeca = *totalMeca+1;
        *acuMeca = *acuMeca +1;
    }else if (*especial=='e'){
        *totalEle = *totalEle+1;
        *acuEle = *acuEle +1;
    }
    
    if (*asistencia>*mejorasi) {
        *mejorasi= *asistencia;
        *legajoMejor = *leg;
    }
}

void procesar(int*leg,int*escuela,int*asistencia,int*profeTotal,int*mejorAsis,int*totalINfo,int*totalMeca,int*totalEle,int*acuInfo,int*acuMeca,int*acuEle,char*especial){
    
    int i=0,contaProf=0, mejorLegajo=0;
    
    for (i=1; i<=5; i++) {
        printf("ingresar No. de legajo\n");
        scanf("%d",&*leg);
        
        while (*leg!=0) {
            printf("ingersar especialidad\n");
            fflush(stdin);
            scanf("%c",&*especial);
            
            printf("ingresar asistencia\n");
            scanf("%d",&*asistencia);
            
            contaProf++;
            *profeTotal = contaProf;
            
            totales(&*leg, &*asistencia,  &*mejorAsis, &*totalINfo, &*totalMeca, &*totalEle, &*especial, &*acuInfo, &*acuMeca, &*acuEle, &mejorLegajo);
            
            printf("ingresar No. de legajo\n");
            scanf("%d",&*leg);
        
        }
        
        printf("Profesores de la Escuela# %d\n",i);
        printf("Informatica: %d, Mecanica: %d, electronica: %d\n",*totalINfo, *totalMeca, *totalEle);
        printf("Mejor asistencia legajo %d\n",mejorLegajo);
        
        
        *totalINfo=0;
        *totalEle =0;
        *totalMeca =0;
        *mejorAsis=0;
        
    }
    
}

int main(){
    
    int legajo=0, escuela=0, asistencia=0, profeTotal=0, mejorAsis=0, totalInfo=0, totalMeca=0, totalEle=0, acuInfo=0, acuMeca=0, acuEle=0;
    char especial;
    
    procesar(&legajo, &escuela, &asistencia, &profeTotal, &mejorAsis, &totalInfo, &totalMeca, &totalEle, &acuInfo, &acuMeca, &acuEle, &especial);
    
    printf("Total de profesores %d\n", profeTotal);
    
    printf("Cantidad de profesores Informatica %d\n", acuInfo);
    
    printf("Cantidad de profesores mecanica %d\n", acuMeca);
    
    printf("Cantidad de profesores Electronica %d\n", acuEle);

    
    return 0;
}
