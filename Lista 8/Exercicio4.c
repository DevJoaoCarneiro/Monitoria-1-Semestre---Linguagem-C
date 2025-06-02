#include <stdio.h>

int calculoFatorial(int x){
    int i;
    int resultado=1;

    for(i=1;i<=x;i++){
        resultado*=i;
    }

    return resultado;
}

int main(){
    int numero;

    printf("Digite um numero inteiro...");
    scanf("%d", &numero);

    printf("O resultado e do fatorial de %d e de....%d\n", numero, calculoFatorial(numero));


    return 0;
}