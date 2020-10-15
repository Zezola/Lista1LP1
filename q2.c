/*
    Escreva um programa em C que verifique se um determinado inteiro positivo que é lido via
    teclado, é ou não primo. 
*/

#include <stdio.h>
#include <stdbool.h>


void verificaPrimo(int numero);


int main ()
{
    int numero, divisores, contador; 
    divisores = 0;

    printf("Digite um numero inteiro \n");
    scanf("%d", &numero);

    /* Se o numero é maior que 2 e é par, automaticamente ele não é primo.
       Nesse caso não precisamos passar esse número pelo algoritmo */
    if (numero % 2 == 0 && numero > 2)
    {
        printf("Numero composto\n");
    } else {

        /* Se não, executamos a rotina para ver se o número é primo */
        verificaPrimo(numero);        
    }    

    return 0;
}



void verificaPrimo(int n)
{
    int divisores = 0;

    for (int i = 3; i < n; i++)
    {
        if (n / i == 0)
        {
            divisores++;
            break;
        }
    }

    if (divisores > 1)
    {
        printf("Numero composto \n");
    } else {
        printf("Numero primo\n");
    }
    
}