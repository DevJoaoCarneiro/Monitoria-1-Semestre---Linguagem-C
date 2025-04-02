/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Exec 9*/
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