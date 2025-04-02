/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Exec 8*/
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