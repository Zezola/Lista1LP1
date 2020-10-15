/*  Escreva um programa em C que calcule o fatorial de um número inteiro positivo. */
#include<stdio.h>

int fatorial(int numero);

int main ()
{
    int n; 
    printf("Digite um numero inteiro \n");
    scanf("%d", &n);

    int fat = fatorial(n);
    printf("O fatorial de %d vale %d\n", n, fat);

    return 0;

}

int fatorial(int numero)
{
    int prod = 1; 

    for (int i = 1; i <= numero; i++)
    {
        prod *= i; 
    }

    return prod;
}