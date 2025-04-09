/*Autor....Joao Victor
  Data.....18/03/25
  Objetivo.Um motorista de taxi deseja calcular o rendimento de seu carro na praça. Sabendo-se que o preço do
  combustível é de R$ 5,24, escreva um algoritmo para ler: a marcação do hodômetro (Km) no início do dia, a
  marcação (Km) no final do dia, o número de litros de combustível gasto e o valor total (R$) recebido dos
  passageiros.
  Apresentar como saída.:
  • Marcação do Odômetro Inicial
  • Marcação do Odômetro Final
  • Quantidade de Quilômetros Percorridos no Dia.
  • Lucro (líquido) do Dia
  • Média do Consumo em Km/L
  • Lucro (líquido) do Dia
*/

#include <stdio.h>

int main(){
    float precoGasolina= 5.24;
    float consumoMedio;
    float lucroBruto;
    float lucroLiquido;
    int hodometroInicio;
    int hodometroFinal;
    int distanciaPercorrida;
    
    printf("Insira a marcacao do hodometro inicial....");
    scanf("%d", &hodometroInicio);
    printf("Insira a marcacao do hodometro final......");
    scanf("%d", &hodometroFinal);
    printf("Digite seu lucro bruto....................");
    scanf("%f", &lucroBruto);
    printf("Digite a media de consumo.................");
    scanf("%f", &consumoMedio);

    distanciaPercorrida =  hodometroFinal-hodometroInicio;
    lucroLiquido = lucroBruto-(precoGasolina*(distanciaPercorrida/consumoMedio));

    printf("=============================================================\n");
    printf("A marcacao do hodometro inicial foi.......%dKm\n", hodometroInicio);
    printf("A marcacao do hodometro final foi.........%dKm\n", hodometroFinal);
    printf("A distancia percorrida foi................%dKm\n",distanciaPercorrida);
    printf("O lucro bruto foi de .....................R$ %.2f\n",lucroBruto);
    printf("O lucro liquido foi de ...................R$ %.2f\n",lucroLiquido);



    return 0;
}