/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Exec 1*/

  #include <stdio.h>

  int main(){
    char nomeCarro[50];
    float precoFabrica;
    float precoAutomovel;
    float impostos;
    float porcentagemVendedor;

    printf("Escreva o nome do carro....:");
    fflush(stdin);
    fgets(nomeCarro, 50, stdin);

    printf("Escreva o preco da fabrica.:");
    scanf("%f", &precoFabrica);

    impostos= precoFabrica*0.45;
    porcentagemVendedor = precoFabrica*0.28;
    precoAutomovel = precoFabrica+impostos+porcentagemVendedor;

    printf("Nome carro.......%s", nomeCarro);
    printf("Preco da fabrica.%.2f\n", precoFabrica);
    printf("Preco final......%.2f\n", precoAutomovel);

    return 0;
  }