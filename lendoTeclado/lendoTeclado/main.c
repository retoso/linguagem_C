#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tipoCliente = 0;

    printf( " Por favor, informe o tipo de cliente:\n");
    printf(  " 1 - Residencial\n");
    printf(  " 2 - Comercial\n");
    printf(  " 3 - Industrial\n");

    scanf( "%i", &tipoCliente);
    printf( "O valor digitado e : %i\n", tipoCliente);

    return 0;
}

