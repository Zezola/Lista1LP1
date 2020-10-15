#include <stdio.h>

int main ()
{
    typedef struct
    {
        float Peso; 
        float Altura;
        int Idade;
    } Pessoa;

    Pessoa Julia, P1, P2; 
    Pessoa Povo[10]; // Vetor de 10 Pessoas

    Julia.Idade = 10; 
    Julia.Peso = 39; 
    Julia.Altura = 153;

    

    return 0;
}