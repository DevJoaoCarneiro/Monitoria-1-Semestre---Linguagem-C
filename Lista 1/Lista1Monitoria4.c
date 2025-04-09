/*Autor....Joao Victor
  Data.....18/03/25
  Objetivo.Uma empresa tem para um determinado funcionário uma ficha contendo o nome, número de horas
  trabalhadas e o n0 de dependentes de um funcionário. Considerando que:
  a) A empresa paga 12 reais por hora e 40 reais por dependentes.
  b) Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR.
  Faça um programa para ler o Nome, número de horas trabalhadas e número de dependentes de um
  funcionário.
  Após a leitura, escreva qual o Nome, salário bruto, os valores descontados para cada tipo de imposto e
  finalmente qual o salário líquido do funcionário
*/
#include <stdio.h>

int main(){
    char nome[50];
    int horasTrabalhadas;
    int horasExtras;
    float salarioBruto;
    float salarioLiquido;
    float Inss;
    float IR;

    printf("Insira seu nome...........................");
    fflush(stdin);
    fgets(nome, 50, stdin);

    printf("Insira seu horas trabalhadas por semana...");
    scanf("%d", &horasTrabalhadas);

    printf("Insira seu horas extras no mes............");
    scanf("%d", &horasExtras);

    horasTrabalhadas = 12*(horasTrabalhadas*4);
    horasExtras = 40*horasExtras;
    salarioBruto = horasTrabalhadas+horasExtras;

    Inss= (salarioBruto*8.5)/100;
    salarioLiquido = salarioBruto-Inss;
    IR = (salarioLiquido*5)/100;
    salarioLiquido= salarioBruto-(Inss+IR);

    printf("\n=======================================\n");
    printf("Nome.....................%s", nome);
    printf("Salario bruto............%.2f\n",salarioBruto);
    printf("Valor desconto Inss......%.2f\n",Inss);
    printf("Valor descontado Ir......%.2f\n",IR);
    printf("Salario liquido..........%.2f\n",salarioLiquido);

    return 0;
}