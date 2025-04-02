/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Exec 2*/

#include <stdio.h>

int main()
{
    float custoFabrica;
    float custoConsumidor;
    float distribuidor;
    float impostos;

    printf("Insira o custo da fabrica...:");
    scanf("%f", &custoFabrica);

    distribuidor = custoFabrica*0.28;
    impostos = custoFabrica*0.45;
    custoConsumidor= custoFabrica+distribuidor+impostos;

    printf("O custo da fabrica e de....:%.2f\n", custoFabrica);
    printf("O custo do consumidor e de.:%.2f\n", custoConsumidor);
    return 0;
}