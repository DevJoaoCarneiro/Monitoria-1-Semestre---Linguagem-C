/*Autor....Joao Victor
  Objetivo.Faça um programa que lê o nome de um funcionário, as horas por ele trabalhadas e seu salário/hora. O
  programa deverá informar o salário final do funcionário, considerando 50% de acréscimo para horas extras.
  Considere como padrão 40 horas semanais.
*/

#include <stdio.h>

int main() {
    char nome[50];
    float horas_trabalhadas;
    float salario_hora;
    float salario_Bruto;
    float salario_final;
    float horaExtras=0;
    int padraoHoras = 40;

    printf("Insira seu nome");
    fflush(stdin);
    fgets(nome, 50, stdin);

    printf("Insira sua horas trabalhadas por semana");
    scanf("%f", &horas_trabalhadas);

    printf("Insira seu salario por hora");
    scanf("%f", &salario_hora);

    if(horas_trabalhadas>padraoHoras){
        horaExtras= (horas_trabalhadas-padraoHoras)*(salario_hora*1.5);
        salario_Bruto = horas_trabalhadas*salario_hora;
    }else{
        salario_Bruto = horas_trabalhadas*salario_hora;
    }
    salario_final = salario_Bruto+horaExtras;

    printf("\nFuncionario: %s", nome);
    printf("O salario liquido e de .... %.2f\n", salario_final);
    

    return 0;
}