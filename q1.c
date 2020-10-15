/* 
 * 1) Escreva um programa em C que encontre o 
 * menor inteiro positivo n que atenda as seguintes condições :
    n / 3 = x inteiro e resto 2
    n / 5 = y inteiro e resto 3
    n / 7 = z inteiro e resto 4 
 */

#include <stdio.h>

int main ()
{
    int n = 1; 
    while (n)
    {
        if (n % 3 == 0 && n % 2 == 0 && n % 4 == 0)
        {
            printf("Seu numero vale: %d\n", n);
            break;
        }

        n++;
    }
    
    return 0;
}