/*Autor....Joao Victor
  Objetivo.Faça um programa que lendo o nome, idade em anos e sexo de um associado de um clube concede desconto
  na mensalidade a ser paga, observando:
  sexo feminino até 30 anos desconto de 20%
  sexo feminino 31 a 40 anos desconto de 30%
  sexo feminino acima de 41 anos desconto de 35%
  sexo masculino até 25 anos sem desconto
  sexo masculino acima de 25 anos desconto de 25%.
  Forneça nome, idade e mensalidade a pagar. */
  
#include <stdio.h>

int main()
{
    char nome[50];
    char sexo;
    int idade;
    float mensalidade;
    float mensalidadeFinal;

    printf("         Bem-vindo(a) calculadora de desconto de mensalidade do clube       \n");
    printf("Para saber quanto de desconto voce recebera precisamos de algumas informacoes\n");
    printf("Primeiramente qual o seu nome?..........: ");
    fflush(stdin);
    fgets(nome, 50, stdin);
    printf("Qual o preco bruto da sua mensalidade?..: ");
    scanf("%f", &mensalidade);
    printf("Qual a sua idade?.......................: ");
    scanf("%d", &idade);
    printf("Qual o seu sexo(M ou F)?................: ");
    scanf(" %c", &sexo);


    if (sexo == 'F'){
        if(idade>41){
            printf("Parabens voce recebeu um desconto de 35%%\n");
            mensalidadeFinal = mensalidade-(mensalidade*0.35);
        }else if(idade>31){
            printf("Parabens voce recebeu um desconto de 30%%\n");
            mensalidadeFinal = mensalidade-(mensalidade*0.30);
        }else{
            printf("Parabens voce recebeu um desconto de 20%%\n");
            mensalidadeFinal = mensalidade-(mensalidade*0.20);
        }
    }else{
        if(idade>25){
            printf("Parabens voce recebeu um desconto de 25%%\n");
            mensalidadeFinal = mensalidade-(mensalidade*0.25);
        }else{
            printf("Infelizmente voce nao recebeu um desconto\n");
            mensalidadeFinal = mensalidade;
        }
    }

    printf("Nome................:%s", nome);
    printf("Idade...............:%d\n", idade);
    printf("Mensalidade antes...:%.2f\n", mensalidade);
    printf("Mensalidade a pagar.:%.2f\n", mensalidadeFinal);
    
}

