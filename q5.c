/*  O troco em moedas é uma combinação de moedas com os seguintes valores :
R$ 1,00 ; 0,50; 0,25; 0,10; 0,05; 0,01
 Escreva um programa em C que leia qualquer valor em centavos (R$0,01 até R$1,00). Calcule e imprima
seu equivalente em moedas. Encontre a solução que utilize o menor número possível de moedas.  */

#include <stdio.h>

int main ()
{

    /* ATM V1 
     * Vamos fazer com o valor em reais, e depois vamos usar a mesma metodologia com moedas 
     */ 

    float valor; 
    int m100, m50, m20, m10, m5, m2; 

    printf("Entre com o valor que quer sacar: \n");
    scanf("%f", &valor);

    m100 = valor / 100;
    m50 = ((int)(valor) % 100) / 50; 
    m20 = ((int)(valor) % 50) / 20; 
    m10 = ((int)(valor) % 20) / 10; 
    m5 = ((int)(valor) % 10) / 5; 
    m2 = ((int)(valor) % 5) / 2; 

    printf("O valor será dado em \n");
    printf("%d notas de 100\n", m100);
    printf("%d notas de 50\n", m50);
    printf("%d notas de 20\n", m20);
    printf("%d notas de 10\n", m10);
    printf("%d notas de 5\n", m5);
    printf("%d notas de 2\n", m2);

    return 0;
}