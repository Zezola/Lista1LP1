#include <stdio.h>

void bubble_sort(int vetor[], int tamanho) {
    int contador, i, aux; 
    for (contador = 1; contador < tamanho; contador++) {
        for (i = 0; i < tamanho - 1; i++) {
            if (vetor[i] > vetor[i + 1]) {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    } 
}


int main ()
{
    int vetor1[5] = {12, 5, 8, 9, 40};

    bubble_sort(vetor1, 5);

    for ( int i = 0; i < 5; i++) {
        printf("%d\n", vetor1[i]);
    }

    printf("Maior elemento = %d\n", vetor1[4]);
    printf("Segundo maior elemento = %d\n", vetor1[3]);

    return 0;
}