#include <stdio.h> 
#include "bubble_sort.h"

int main () {
    /* Dados três vetores com 10 posições cada um, preenchidos com números inteiros, fazer um programa
    em C que, após a leitura dos vetores coloque-os em ordem crescente. */

    int vetor[5]; 

    printf("Entre com 5 numeros inteiros: \n");

    for (int i = 0; i < 5; i++) {
        printf("Valor %d: \n", i + 1);
        scanf("%d", &vetor[i]);
    }

    bubble_sort(vetor, 5);

    printf("O vetor em ordem crescente é: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]);
    }



    return 0;
}