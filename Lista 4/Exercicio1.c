/*Autor.....Joao Victor
  Data......08/04/25
  Objetivo..Apresentar o quadrado dos números inteiros de 15 a 200.
*/

#include <stdio.h>

int main()
{
    int i;

    for (i = 15; i <= 200; i++)
    {
        printf("O quadrado do numero %d e igual a %d\n", i, i * i);
    }

    return 0;
}