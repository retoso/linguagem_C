#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1, num2, soma, subtracao, multiplicacao, divisao;

    printf(" Calculadora Vs.1.0 \n");
    printf(" Digite os 2 valores para serem processados: \n ");

        scanf( "%i%i", &num1, &num2);
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    
    printf( "\tA soma e ...........:%i\n", soma);
    printf( "\tA subtracao e ......:%i\n", subtracao);
    printf( "\tA multiplicacao e ..:%i\n", multiplicacao);
    printf( "\tA divisao e ........:%i\n", divisao);




return 0;
}
