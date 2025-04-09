/*Autor....Joao Victor
  Objetivo.Faça um programa que determina o menor entre três valores inteiros lidos. 

*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int menor;

    printf("Insira o 1 valor...");
    scanf("%d", &num1);
    printf("Insira o 2 valor...");
    scanf("%d", &num2);
    printf("Insira o 3 valor...");
    scanf("%d", &num3);

    menor = num1;
    if(num2<menor){
        menor = num2;
    }

    if(num3<menor){
        menor = num3;
    }

    printf("O menor valor e de....%d", menor);
    return 0;
}