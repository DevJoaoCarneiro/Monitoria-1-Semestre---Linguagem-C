/*Autor....Joao Victor
  Objetivo.Elaborar um algoritmo que efetue a leitura do nome e do sexo de uma pessoa, apresentando como saída uma
  das seguintes mensagens: “ILMO SR.” Para o sexo Masculino; “ILMA SRA.”, para o sexo feminino. Apresente
  também abaixo da mensagem o nome da pessoa
*/

#include <stdio.h>

int main()
{   
    char nome[50];
    char sexo;

    printf("Insira seu nome..........");
    fflush(stdin);
    fgets(nome, 50, stdin);
    printf("Insira seu sexo (M-F)....");
    scanf(" %c", &sexo);

    if(sexo == 'M' || sexo == 'm'){
        printf("ILMA SR\n");
    }else{
        printf("ILMA SRA\n");
    }
    return 0;
}