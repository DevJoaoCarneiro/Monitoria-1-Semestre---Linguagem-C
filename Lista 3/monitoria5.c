/*Autor....Joao Victor
  Objetivo. Determinar num conjunto de 3 números o menor deles, imprimindo-o e também o maior deles.
*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int menor;
    int maior;

    printf("Insira o primeiro numero...");
    scanf("%d", &num1);
    printf("Insira o segundo numero....");
    scanf("%d", &num2);
    printf("Insira o terceiro numero...");
    scanf("%d", &num3);

    maior = num1;

    if (num2 > maior)
    {
        maior = num2;
    }

    if (num3 > maior)
    {
        maior = num3;
    }

    menor= num1;

    if (num2 < menor)
    {
        menor = num2;
    }

    if (num3 < menor)
    {
        menor = num3;
    }

    printf("Maior numero....%d\n", maior);
    printf("Menor numero....%d\n", menor);

    return 0;
}