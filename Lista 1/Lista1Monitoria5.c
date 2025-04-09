/*Autor....Joao Victor
  Data.....18/03/25
  Objetivo.Uma loja vende bicicletas com um acréscimo de 50 % sobre o seu preço de custo. Ela paga a cada
  vendedor 2 salários-mínimos mensais, mais uma comissão de 15 % sobre o preço de custo de cada
  bicicleta vendida, dividida igualmente entre eles.
  Escreva um programa em linguagem C, que leia o número de empregados da loja, o valor do saláriomínimo, o preço de custo de cada bicicleta, o número de bicicletas vendidas.
  Calcule e escreva: O salário final de cada empregado e o lucro (líquido) da loja.
*/

#include <stdio.h>

int main(){
    /*Salario*/
    float salarioMinimo = 1518.50;
    float salarioBruto;
    float salarioLiquido;
    float lucroLoja;

    /*Custo*/
    float custoBicicleta;
    float precoVenda;

    /*Comissao*/
    float comissaoTotal;
    float comissaoPorFuncionario;

    /*Numero vendas e empregados*/
    int numVendaBicicleta;
    int numEmpregados;
    
    printf("Insira o numero de empregados...:");
    scanf("%d", &numEmpregados);
    printf("Insira o custo da bicicleta.....:");
    scanf("%f", &custoBicicleta);
    printf("Numero de bicicletas vendidas...:");
    scanf("%d", &numVendaBicicleta);

    //Preco de venda da bicicleta
    precoVenda = custoBicicleta+(custoBicicleta*0.50);
    //Comissao total
    comissaoTotal = numVendaBicicleta*(custoBicicleta*0.15);
    //Salario bruto
    salarioBruto = salarioMinimo*2;
    //Comissao por funcionario
    comissaoPorFuncionario = comissaoTotal/numEmpregados;
    //Salario Liquido
    salarioLiquido = salarioBruto+comissaoPorFuncionario;
    //Lucro loja
    lucroLoja = (precoVenda-custoBicicleta)*numVendaBicicleta-comissaoTotal;

    printf("Salario final do empregado....%.2f\n",salarioLiquido);
    printf("Lucro liquido da loja.........%.2f\n",lucroLoja);

    return 0;
}