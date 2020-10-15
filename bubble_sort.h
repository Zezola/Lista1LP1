void bubble_sort (int vetor[], int tam) {
    int contador, aux, i; 
    for (contador = 1; contador < tam; contador++) {
        for (i = 0; i < tam - 1; i++) {
            if(vetor[i] > vetor[i + 1]) {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    }
}