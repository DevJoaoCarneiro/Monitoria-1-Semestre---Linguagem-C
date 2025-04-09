/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Faça um programa para calcular e imprimir o salário bruto a ser recebido por um funcionário em um mês.
  O programa deverá utilizar os seguintes dados: número de horas que o funcionário trabalhou no mês, valor
  recebido por hora de trabalho e número de filhos com idade menor do que 14 anos (para adicionar o salário
  família de R$ 13,48 por filho). */
  #include <stdio.h>

  int main(){
    int horasTrabalhasMes;
    int numFilhos;
    float valorPorHora;
    float salario;

    printf("Horas trabalhadas no mes...:");
    scanf("%d", &horasTrabalhasMes);
    printf("Valor recibido por hora....:");
    scanf("%f", &valorPorHora);
    printf("Numero de filhos < 14......:");
    scanf("%d", &numFilhos);
    
    salario = (horasTrabalhasMes*valorPorHora)+(numFilhos*13.48);

    printf("O salario e de .........%.2f",salario);

    return 0;
  }