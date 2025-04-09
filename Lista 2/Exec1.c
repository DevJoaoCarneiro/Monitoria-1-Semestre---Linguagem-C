/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..O preço de um automóvel é calculado pela soma do preço de fábrica com o preço dos impostos (45% do
  preço de fábrica) e a percentagem do revendedor (28% do preço de fábrica).
  Faça um algoritmo que leia o nome do automóvel e o preço de fábrica e escreva o nome do automóvel e o
  preço final.*/

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