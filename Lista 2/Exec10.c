/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Uma loja vende bicicletas com um acréscimo de 50 % sobre o seu preço de custo. Ela paga a cada
  vendedor 2 salários-mínimos mensais, mais uma comissão de 15 % sobre o preço de custo de cada
  bicicleta vendida, dividida igualmente entre eles.
  Escreva um programa que leia o número de empregados da loja, o valor do salário mínimo, o preço de
  custo de cada bicicleta, o número de bicicletas vendidas, calcule e escreva: O salário final de cada
  empregado e o lucro (líquido) da loja. */
  #include <stdio.h>

  int main(){
    int numEmpregados;
    int numeroBikeVendidas;
    float salarioMinimo;
    float precoCustoBicicleta;
    float precoVenda;
    float salarioBruto;
    float salarioFinal;
    float comissaoPorBike;
    float custo;
    float lucroLiquidoEmpresa;
    float comissaoPorfuncionario;

    printf("Insira numero de empregados.....");
    scanf("%d",&numEmpregados);
    printf("Insira numero de bike vendidas..");
    scanf("%d",&numeroBikeVendidas);
    printf("Insira o salario minimo.........");
    scanf("%f",&salarioMinimo);
    printf("Insira o custo da bicicleta.....");
    scanf("%f",&precoCustoBicicleta);

    precoVenda = precoCustoBicicleta+(precoCustoBicicleta*0.50);

    comissaoPorBike = precoCustoBicicleta*0.15;

    comissaoPorfuncionario = (comissaoPorBike*numeroBikeVendidas)/numEmpregados;

    salarioBruto= salarioMinimo*2;

    salarioFinal= salarioBruto+comissaoPorfuncionario;

    custo = (salarioBruto*numEmpregados)+(precoCustoBicicleta*numeroBikeVendidas);

    lucroLiquidoEmpresa = (numeroBikeVendidas*precoVenda)-custo;

    printf("Salario final de cada empregado....:%.2f\n", salarioFinal);
    printf("Lucro liquido da loja..............:%.2f\n",lucroLiquidoEmpresa);


    return 0;
  }