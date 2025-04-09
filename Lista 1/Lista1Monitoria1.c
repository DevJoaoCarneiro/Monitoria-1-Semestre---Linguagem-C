/*Autor....Joao Victor
  Data.....18/03/25
  Objetivo.Dado as seguintes informações de um funcionário: Nome, idade cargo e o seu salário bruto considere:
  a) O salário bruto teve um reajuste de 38%.
  b) O funcionário receberá uma gratificação de 20% do salário bruto.
  c) O Salário total é descontado em 15% de Imposto de Renda
  Faça um programa para:
  • Imprimir Nome, idade e cargo.
  • Imprimir o salário bruto Anterior.
  • Imprimir o salário bruto corrigido.
  • Imprimir o valor da gratificação.
  • Imprimir o valor do desconto.
  • Imprimir o salário líquido.
*/

  #include <stdio.h>

  int main(){
    char nome[50];
    char cargo[50];
    int idade;
    float salarioBruto;
    float total;
    float reajuste;
    float gratificacao;
    float desconto;

    printf("Insira seu nome.....");
    fflush(stdin);
    fgets(nome, 50, stdin);

    printf("Insira o seu cargo..");
    fflush(stdin);
    fgets(cargo, 50, stdin);

    printf("Insira sua idade....");
    scanf("%d", &idade);

    printf("Insira seu salario..");
    scanf("%f", &salarioBruto);

    reajuste = (salarioBruto*38)/100;
    total = salarioBruto+reajuste;

    gratificacao= (total*20)/100;
    total = total+gratificacao;
    
    desconto= (total*15)/100;
    total= total-desconto;

    printf("\n==========================================\n");
    printf("Nome.......................%s", nome);
    printf("Idade......................%d\n", idade);
    printf("Cargo......................%s", cargo);
    printf("Salario Bruto..............%.2f\n",salarioBruto);
    printf("Salario bruto corrigido....%.2f\n",total+desconto);
    printf("Valor da graficacao........%.2f\n",gratificacao);
    printf("Valor do reajuste..........%.2f\n",reajuste);
    printf("Valor do desconto..........%.2f\n",desconto);
    printf("O salario Liquido..........%.2f\n",total);

    return 0;
  }