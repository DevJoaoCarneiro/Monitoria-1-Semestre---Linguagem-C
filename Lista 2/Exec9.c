/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Uma revendedora de carros usados paga a seus funcionários vendedores, um salário fixo por mês, mais
  uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas.
  Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário
  fixo e a comissão que recebe por carro vendido. Escreva um algoritmo que calcule e escreva o salário
  mensal do vendedor.*/
  
  #include <stdio.h>

  int main(){
    int numCarrosVendidos;
    int comissao;
    float totalVendas;
    float salarioFixo;
    float salarioFinal;

    printf("Insira o salario do funcionario....:");
    scanf("%f", &salarioFixo);
    printf("Insira o valor total das vendas....: ");
    scanf("%f", &totalVendas);
    printf("Insira o numero de carros vendidos.:");
    scanf("%d",&numCarrosVendidos);
    printf("Insira a porcentagem de comissao...:%%");
    scanf("%d", &comissao);

    salarioFinal = salarioFixo+((numCarrosVendidos*comissao)/100)+(totalVendas*0.05);

    printf("\nSalario mensal do vendedor: %.2f\n", salarioFinal);


    return 0;
  }