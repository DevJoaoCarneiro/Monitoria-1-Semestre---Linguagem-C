/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Exec 3*/

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