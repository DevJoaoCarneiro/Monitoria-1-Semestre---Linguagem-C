/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa
  apenas em dias. Assuma, neste programa, que um ano tem 365 dias e que um mês tem 30 dias. */

  #include <stdio.h>


  int main(){
    int ano;
    int mes;
    int dia;
    int conversao;

    printf("Insira sua idade em ano....");
    scanf("%d", &ano);
    printf("Insira quantos meses.......");
    scanf("%d", &mes);
    printf("Insira quantos dias........");
    scanf("%d", &dia);

    conversao = (ano*365)+(mes*30)+(dia);

    printf("Conversao de Ano/Mes/Dia para dia....:%d", conversao);

    return 0;
  }