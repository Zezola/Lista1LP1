/*
 *
 *  Um inteiro perfeito n é igual a soma de todos os seus divisores próprios.
 *  A faixa de seus divisores
 *  próprios vai de 1 a (n-1). Por exemplo : 6 é um inteiro perfeito; a soma de todos os seus divisores
 *  próprios (1 + 2 + 3) é igual a 6. 
 * Escreva um programa em C que determine se um número no intervalo de 1 a 32767 é
 *  um inteiro perfeito. 
 */

#include <stdio.h>


int numeroPerfeito(int numero);

int main()
{

    int numero, soma;
    soma = 0;
    printf("Entre um numero inteiro de 1 ate 32767 : \n");
    scanf("%d", &numero);

    if (numero < 32767 && numero > 1 )  {

        soma = numeroPerfeito(numero);
    } else {
        printf("Numero fora do intervalo. \n");
        return 0;
    }


    if(soma == numero)
    {
        printf("Numero perfeito\n");
    }else {
        printf("Nao e numero perfeito \n");
    }
    return 0;
}
 
int numeroPerfeito(int numero)
{
    int soma = 0; 
    for (int i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            soma += i;
        }
    }

    return soma;
}