/*Autor....Joao Victor
  Objetivo.Faça um programa que lê o nome de um aluno, suas três notas e fornece o conceito obtido em função da sua
  média considerando: nota1 - peso 2, nota2 - peso 3 nota3 - peso 5.
  Média entre 0 - 4 (inclusive, inclusive) conceito D
  Média entre 4 - 6 (exclusive , inclusive) conceito C
  Média entre 6 - 8 (exclusive, inclusive ) conceito B
  Média entre 8 - 10 (exclusive, inclusive) conceito A
*/

#include <stdio.h>

int main()
{
    int nota1;
    int nota2;
    int nota3;
    int peso1 = 2;
    int peso2 = 3;
    int peso3 = 5;
    float mediaPonderada;
    char conceito;
    char nome[50];

    printf("Digite o nome do aluno: ");
    fflush(stdin);
    fgets(nome, 50, stdin);
    printf("Insira a nota 1");
    scanf("%d", &nota1);
    printf("Insira a nota 2");
    scanf("%d", &nota2);
    printf("Insira a nota 3");
    scanf("%d", &nota3);
    
    mediaPonderada = ((nota1*peso1)+(nota2*peso2)+(nota3*peso3))/(peso1+peso2+peso3);

    if (mediaPonderada > 8) {
        conceito = 'A';
    } else if (mediaPonderada > 6) {
        conceito = 'B';
    } else if (mediaPonderada > 4) {
        conceito = 'C';
    } else {
        conceito = 'D';
    }

    printf("\nAluno: %s\n", nome);
    printf("Media: %.2f\n", mediaPonderada);
    printf("Conceito: %c\n", conceito);


    return 0;
}