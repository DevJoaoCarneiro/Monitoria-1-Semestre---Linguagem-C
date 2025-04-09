/*Autor....Joao Victor
  Objetivo. Elaborar a leitura de um número inteiro e apresentar uma mensagem informando se o número é par ou impar. 

*/

#include <stdio.h>

int main()
{   int num;

    printf("Insira um numero....");
    scanf("%d", &num);

    if(num%2==0){
        printf("Numero e par");
    }else{
        printf("Numero e impar");
    }

    return 0;
}