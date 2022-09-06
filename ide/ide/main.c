#include <stdio.h>
#include <stdlib.h>

int main(){

    int tipoCliente = 0;
    float consumo = 0;

    printf( " Por favor, informe o tipo de cliente:\n");
    printf(  " 1 - Residencial\n");
    printf(  " 2 - Comercial\n");
    printf(  " 3 - Industrial\n");

    scanf( "%i", &tipoCliente);

    switch(tipoCliente){
        case 1:
                printf( " Por favor, informe o valor total do consumo no mes:\n");
                scanf( "%f", &consumo);
                float valorTotal = (0.55 * consumo) + 5.00;
                printf( "O valor total de consumo e R$ %f\n", valorTotal);

            break;

        case 2:
                printf( " Por favor, informe o valor total do consumo no mes:\n");
                scanf( "%f", &consumo);

                if (consumo > 80){

                    int consumo2  = consumo - 80;
                    float valorTotal = (0.55 * 80) + (0.85 * consumo2) + 120.00;
                    printf( "O valor total de consumo e R$ %f\n", valorTotal);

                } else {

                    float valorTotal = (0.55 * consumo) + 120.00;
                    printf( "O valor total de consumo e R$ %f\n", valorTotal);
                }

            break;

        case 3:
                printf( " Por favor, informe o valor total do consumo no mes:\n");
                scanf( "%f", &consumo);

                if (consumo > 80){

                    int consumo2  = consumo - 80;
                    float valorTotal = (0.55 * 80) + (1.25 * consumo2) + 450.00;
                    printf( "O valor total de consumo e R$ %f\n", valorTotal);

                } else {

                    float valorTotal = (0.55 * consumo) + 450.00;
                    printf( "O valor total de consumo e R$ %f\n", valorTotal);
                }

            break;

        default:
            printf(  "Valor invalido.\n");
            break;

    }

    return 0;
}

