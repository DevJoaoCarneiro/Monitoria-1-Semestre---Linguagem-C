/*Autor....Joao Victor
  Data.....18/03/25
  Objetivo.Exercicio 01*/

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