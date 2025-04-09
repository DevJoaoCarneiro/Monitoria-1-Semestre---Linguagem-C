/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Escrever um programa c que lê o número de um vendedor, o nome, o seu salário fixo, o total de vendas por
  ele efetuadas e o porcentual que ganha sobre o total de vendas.
  Calcular o salário total do vendedor.
  Escrever número do vendedor, o nome e o salário total. 
*/
#include <stdio.h>

int main()
{
    char nomeVendedor[50];
    float salarioFixo;
    float salarioComAjuste;
    int totalVendas;
    int porcentagemPorVenda;
    int numVendedor;

    printf("Insira o codigo do vendedor..........:");
    scanf("%d", &numVendedor);

    printf("Insira o nome do vendedor............:");
    fflush(stdin);
    fgets(nomeVendedor, 50, stdin);

    printf("Insira seu salario fixo..............:");
    scanf("%f", &salarioFixo);

    printf("Insira o total de vendas.............:");
    scanf("%d", &totalVendas);

    printf("Insira a margem em %% sobre a venda..:");
    scanf("%d", &porcentagemPorVenda);

    salarioComAjuste = salarioFixo+(totalVendas*porcentagemPorVenda);

    printf("Numero do vendedor...%d\n",numVendedor);
    printf("Nome vendedor........%s",nomeVendedor);
    printf("Salario total........%.2f\n",salarioComAjuste);
    return 0;
}