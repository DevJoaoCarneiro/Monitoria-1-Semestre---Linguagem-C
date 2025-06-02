#include <stdio.h>
#include <stdbool.h>

bool ehPerfeito(int valor){
    int i;
    int soma = 0;

    for(i=1;i<valor;i++){
        if(valor%i==0){
            soma+=i;
        }
    }

    if(soma==valor){
        return true;
    }else{
        return false;
    }
    
}

int main(){

    int valor;

    printf("Digite um valor....");
    scanf("%d", &valor);

    if(ehPerfeito(valor)== true){
        printf("O numero e perfeito\n");
    }else{
         printf("O numero nao e perfeito\n");
    }


    return 0;
}