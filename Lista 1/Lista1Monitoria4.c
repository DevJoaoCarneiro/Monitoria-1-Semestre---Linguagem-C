#include <stdio.h>

int main(){
    char nome[50];
    int horasTrabalhadas;
    int horasExtras;
    float salarioBruto;
    float salarioLiquido;
    float Inss;
    float IR;

    printf("Insira seu nome...........................");
    fflush(stdin);
    fgets(nome, 50, stdin);

    printf("Insira seu horas trabalhadas por semana...");
    scanf("%d", &horasTrabalhadas);

    printf("Insira seu horas extras no mes............");
    scanf("%d", &horasExtras);

    horasTrabalhadas = 12*(horasTrabalhadas*4);
    horasExtras = 40*horasExtras;
    salarioBruto = horasTrabalhadas+horasExtras;

    Inss= (salarioBruto*8.5)/100;
    salarioLiquido = salarioBruto-Inss;
    IR = (salarioLiquido*5)/100;
    salarioLiquido= salarioBruto-(Inss+IR);

    printf("\n=======================================\n");
    printf("Nome.....................%s", nome);
    printf("Salario bruto............%.2f\n",salarioBruto);
    printf("Valor desconto Inss......%.2f\n",Inss);
    printf("Valor descontado Ir......%.2f\n",IR);
    printf("Salario liquido..........%.2f\n",salarioLiquido);

    return 0;
}