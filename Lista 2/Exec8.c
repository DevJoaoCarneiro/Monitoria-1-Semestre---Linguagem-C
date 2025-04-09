/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Considere que o aumento dos funcionários de uma empresa é de 8% do salário atual mais um percentual
  de produtividade discutido com a empresa. Escrever um algoritmo que lê o número do funcionário, seu
  salário atual, e o índice de produtividade discutido com a empresa. Então, escreve o número do funcionário,
  seu aumento e o valor de seu novo salário. */
  #include <stdio.h>

  int main()
  { int numeroFuncionario;
    int porcentualProdutividade;
    float salario;
    float novoSalario;

    printf("Insira o numero..............");
    scanf("%d", &numeroFuncionario);
    printf("Insira o salario.............");
    scanf("%f", &salario);
    printf("Insira o %% De produtividade..%%");
    scanf("%d", &porcentualProdutividade);

    novoSalario= salario+(salario*0.08)+((salario*porcentualProdutividade)/100);

    printf("O novo salario e de...%.2f",novoSalario);
    

    return 0;
  }