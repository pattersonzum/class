#include <stdio.h>
#include <stdlib.h>

void procesarTotales(char categoria,float importe,char rating,float*b,float*r,float*m,float*total);

void procesar(int*contadorClientes, char*ratingMayor, char*catMasLucra);

int main()
{
    int totalClientes = 0;

    char ratingMayorGanancia;
    char catMasLucrativa;

    procesar(&totalClientes,&ratingMayorGanancia, &catMasLucrativa);

    printf("\n**************************************\n");

    printf("Total de clientes procesados %d\n", totalClientes);
    printf("Rating con mayor ganancias %c\n", ratingMayorGanancia);
    printf("Categoria mas Lugrativa %c\n", catMasLucrativa);

    return 0;
}

void procesarTotales(char categoria,float importe,char rating,float*b,float*r,float*m,float*total){

    if(rating=='B'){

        (*b)+=importe;

    }else if(rating=='R'){

        (*r)+=importe;

    }else if(rating=='M'){
        (*m)+=importe;
    }

    (*total)+=importe;

}

void procesar(int*contadorClientes, char*ratingMayor, char*catMasLucra){

    int id = 0;
    char rating , categoria;
    float importe = 0, total = 0, buenas = 0, regular = 0, malas = 0, masLucra = 0, masGanancia = 0;

    printf("\n**************************************\n");

    printf("por favor ingresa un numero de cliente: ");
    scanf("%d",&id);


    while(id!=0){

            buenas = 0;
            regular = 0;
            malas = 0;
            total = 0;

        (*contadorClientes)++;

            printf("\nIngresa una categoria P para platino o G para gold\n");
            fflush(stdin);
            scanf("%c",&categoria);
            printf("\nIngresa un rating para la publicidad \"B\", \"R\", \"M\"\n");
            fflush(stdin);
            scanf("%c",&rating);

           while(rating!='0'){

                printf("\nIngresa un importe: $");
                scanf("%f",&importe);


                procesarTotales(categoria,importe,rating,&buenas,&regular,&malas,&total);


                printf("\nIngresa un rating para la publicidad \"B\", \"R\", \"M\"\n");
                fflush(stdin);
                scanf("%c",&rating);


            }
                printf("\n**************************************\n");
                printf("\nTotal de publicidades del cliente %d: $%.2f\n",id,total);
                printf("\nPublicidades Buenas $%.2f\n",buenas);
                printf("\nPublicidades Regulares $%.2f\n",regular);
                printf("\nPublicidades malas $%.2f\n",malas);
                printf("\n**************************************\n");

            if(total>masLucra){

               (*catMasLucra) = categoria;
               masLucra=total;
            }
            if(buenas>masGanancia){
                (*ratingMayor)='B';
                masGanancia=buenas;
            }else if(malas>masGanancia){
                (*ratingMayor)='M';
                masGanancia=malas;
            }else if(regular>masGanancia){
                (*ratingMayor)='R';
                masGanancia=regular;
            }


            printf("por favor ingresa un numero de cliente: ");
            scanf("%d",&id);
    }



}
