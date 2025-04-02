/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Exec 7*/
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