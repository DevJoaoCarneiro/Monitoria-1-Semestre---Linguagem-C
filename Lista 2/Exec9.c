/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Exec 9*/
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