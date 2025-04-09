/*Autor.....Joao Victor
  Data......08/04/25
  Objetivo..Elaborar um programa que apresente no final o somatório dos valores pares existentes na faixa
  de 1 até 500.
*/

#include <stdio.h>

int main()
{
    int i;
    int soma = 0;
    for (i = 0; i <= 500; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }
    }

    printf("A soma dos numeros pares de 1 a 500 e...%d", soma);
    return 0;
}