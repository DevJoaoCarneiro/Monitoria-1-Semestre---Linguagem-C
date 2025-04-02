#include <stdio.h>

int main()
{
    int nota1;
    int nota2;
    int nota3;
    int contador=0;
    int soma=0;
    float media;

    printf("Insira a nota 1...");
    scanf("%d", &nota1);
    printf("Insira a nota 2...");
    scanf("%d", &nota2);
    printf("Insira a nota 3...");
    scanf("%d", &nota3);

    if(nota1%2!=0){
        soma = soma+nota1;
        contador++;
    }

    if(nota2%2!=0){
        soma = soma+nota2;
        contador++;
    }

    if(nota3%2!=0){
        soma = soma+nota3;
        contador++;
    }

    if(contador==0){
        printf("Todos notas sao pares\n");
    }

    media = soma/contador;

    printf("A media e de .... %.2f", media);

    return 0;
}