/*Autor....Joao Victor
  Objetivo.Ler quatro valores referentes a quatro notas escolares de um aluno e imprimir uma mensagem dizendo que o
  aluno foi aprovado, se o valor da media escolar for maior ou igual a 7. Se o valor da media for menor que 7
  mostrar a mensagem que o aluno reprovou. 
*/

#include <stdio.h>

int main()
{ 
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    float media;

    printf("Insira a nota 1");
    scanf("%d", &nota1);
    printf("Insira a nota 2");
    scanf("%d", &nota2);
    printf("Insira a nota 3");
    scanf("%d", &nota3);
    printf("Insira a nota 4");
    scanf("%d", &nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    if(media>=7){
        printf("Parabens!!Voce esta aprovado");
    }else{
        printf("Infelizmente voce reprovou");
    }

}