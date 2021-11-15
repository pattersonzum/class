#include <stdio.h>
#include <stdlib.h>

void procesarTotales(char categoria,float importe,float*totalComun,float*totalPref,float*totalBonific);

void procesarClientes(int*totalClientes,int*factBonificadas,char*masLucrativa);

int main()
{
    int totalClientes = 0 , facturasBonificadas = 0;
    char categoriaMasLucrativa ;

    procesarClientes(&totalClientes,&facturasBonificadas,&categoriaMasLucrativa);

    printf("\n*********************\n");
    printf("\nEl total de clientes procesados: %d\n",totalClientes);
    printf("\nLa categoria mas lucrativa fue: %c\n",categoriaMasLucrativa);
    printf("\nEL total de facturas bonificadas: %d\n",facturasBonificadas);
    return 0;
}

void procesarTotales(char categoria,float importe,float*totalComun,float*totalPref,float*totalBonific){

    switch(categoria){

    case 'C':
        (*totalComun)+=importe;
        break;
    case 'c':
        (*totalComun)+=importe;
        break;
    case 'P':
        (*totalPref)+=importe;
        break;
    case 'p':
        (*totalPref)+=importe;
        break;
    case 'B':
        (*totalBonific)+=importe;
        break;
    case 'b':
        (*totalBonific)+=importe;
        break;
    default:
        break;

    }

}

void procesarClientes(int*totalClientes,int*factBonificadas,char*masLucrativa){

    int i = 0, id = 0;

    float comun = 0.0, preferencial = 0.0, bonificada = 0.0, importe = 0.0, importeMayor = 0.0;

    char categoria;


    printf("\n*********** Para procesar un cliente ingresa un ID distinto a cero **********\n");
    scanf("%d",&id);

    while(id){

            comun = 0.0;
            preferencial = 0.0;
            bonificada = 0.0;

            (*totalClientes)++;


            for(i=0;i<5;i++){

                    printf("\nIngresa a que categoria pertenece la Factura: Comun, Preferencial, Bonificada: ");
                    fflush(stdin);
                    scanf("%c",&categoria);
                    printf("\nIngresa el importe de la factura: ");
                    scanf("%f",&importe);

                    if(categoria=='B'||categoria=='b')
                        (*factBonificadas)++;


                    procesarTotales(categoria,importe,&comun,&preferencial,&bonificada);

                    if(importe>importeMayor)
                        (*masLucrativa)=categoria;

            }

            printf("\n*********************************************\n");
            printf("\nTotal de Facturas del cliente: %d\n",id);
            printf("Categoria C: %.2f Categoria P: %.2f Categoria B: %.2f\n",comun,preferencial,bonificada);
            printf("\n*********************************************\n");
            printf("\nPara procesar un nuevo cliente ingresa un ID distinto a cero\n");
            scanf("%d",&id);

    }


}
