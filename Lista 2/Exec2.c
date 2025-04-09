/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e
  dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28% e os
  impostos de 45%, escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao
  consumidor. */

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