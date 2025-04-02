/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Exec 4*/

  #include <stdio.h>

  int main(){
    float precoEmReais;
    float precoEmDolar;
    float cotacao;

    printf("Insira o preco em reais....:");
    scanf("%f", &precoEmReais);

    printf("Insira a cotacao do dolar..:");
    scanf("%f", &cotacao);

    precoEmDolar = precoEmReais/cotacao;

    printf("O preco em dolar e.......:%.2f",precoEmDolar);



    return 0;
  }