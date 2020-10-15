#include <stdio.h> 
#include <stdbool.h>
#include <string.h> 


int countUniqueChars(char* str) {
    int count = 0; 

    for (int i = 0; i < strlen(str); i++) {
        bool appears = false; 
        for (int j = 0; j < i; j++) {
            if (str[j] == str[i]) {
                appears = true;
                break;
            }
        }
        
        if (!appears) {
            count++;
        }
    }

    return count;
}

int main () {
    /* Ex 9 
     Escrever um programa em C que calcule e imprima o número de caracteres distintos presentes em uma
     cadeia de caracteres dada. Considerar o tamanho máximo da cadeia como sendo de 80 colunas. */
    
    char palavra[81]; 

    printf("Digite uma palavra: \n");
    scanf("%s", palavra);

    int numeroCaracteresUnicos = countUniqueChars(palavra);
    printf("A palavra %s tem %d caracteres unicos\n", palavra, numeroCaracteresUnicos);

    return 0;
}