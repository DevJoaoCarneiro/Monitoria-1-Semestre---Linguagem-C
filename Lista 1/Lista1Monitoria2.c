/*Autor....Joao Victor
  Data.....18/03/25
  Objetivo.Escreva um programa que dado os litros de combustível gasto e os quilômetros percorridos por um
  automóvel, calcule os gastos de combustível em Reais, calcule também qual a média de consumo que o
  carro teve durante a viagem.
  (Considerar que um litro custa R$ 5,24)
  Calcular e Escrever.:
  • Litros de Combustível Gasto.
  • Total de Quilômetros Percorridos.
  • Total gasto de combustível em Real.
  • Consumo Médio de Combustível.
*/

#include <stdio.h>

int main(){
    float precoLitro = 5.24;
    float litroGasto;
    float consumoMedio;
    float valorGasto;
    int kmPercorridos;

    
    printf("Digite os km percorridos...:");
    scanf("%d", &kmPercorridos);

    printf("Digite o consumo medio.....:");
    scanf("%f", &consumoMedio);

    litroGasto = kmPercorridos/consumoMedio;
    valorGasto = litroGasto*precoLitro;

    printf("Km percorridos...:%d\n", kmPercorridos);
    printf("Consumo medio....:%.2f\n", consumoMedio);
    printf("Litros gasto.....:%.2f\n", litroGasto);
    printf("Valor gasto......:%.2f\n", valorGasto);



    return 0;
}