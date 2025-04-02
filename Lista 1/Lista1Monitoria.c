#include <stdio.h>

int main(){
    char nome[50];
    char cargo[50];
    int idade;
    float salario;
    float reajuste;
    float gratificacao;
    float desconto;

    printf("Insira seu nome....");
    scanf("%s", nome);

    printf("Insira seu cargo...");
    scanf("%s", cargo);

    printf("Insira sua idade...");
    scanf("%d", &idade);

    printf("Insira seu salario.");
    scanf("%f", &salario);

    printf("=======================================\n");
    printf("O salario e........%.2f\n", salario);

    reajuste = salario*0.38;
    salario = salario+reajuste;

    //Depois do reajuste
    
    printf("Reajuste de 38 porcento\n");
    printf("O reajuste foi de..%.2f\n", reajuste);
    printf("O salario atual e..%.2f\n", salario);
    

    gratificacao = salario*0.20;
    salario = salario+gratificacao;

    //Depois da gratificacao
    printf("=======================================\n");
    printf("Gratificacao de 20 porcento\n");
    printf("O reajuste foi de..%.2f\n", gratificacao);
    printf("O salario atual e..%.2f\n\n", salario);
    printf("=======================================\n");

    desconto = salario*0.15;
    salario = salario-desconto;

    printf("Desconto de 15 porcento\n");
    printf("O desconto foi de..%.2f\n", desconto);
    printf("O salario final e..%.2f\n\b", salario);
    printf("=======================================\n");

    printf("Nome.....%s\n", nome);
    printf("Cargo....%s\n", cargo);
    printf("Idade....%d\n", idade);
    printf("Salario..%.2f\n", salario);


    return 0;
}