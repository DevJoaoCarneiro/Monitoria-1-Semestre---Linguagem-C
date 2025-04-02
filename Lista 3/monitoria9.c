#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero inteiro...");
    scanf("%d", &num);

    if(num%2 == 0){
        printf("O numero e par\n");
    }else{
        printf("O numero e impar\n");
    }

    if(num%3== 0){
        printf("E multiplo de 3\n");
    }else{
        printf("Nao e multiplo de 3\n");
    }

    if(num%5== 0){
        printf("E multiplo de 5\n");
    }else{
        printf("Nao e multiplo de 5\n");
    }

    if(num%7== 0){
        printf("E multiplo de 7\n");
    }else{
        printf("Nao e multiplo de 7\n");
    }

    
    return 0;
}