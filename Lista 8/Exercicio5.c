#include <stdio.h>
float pesoIdeal(float altura, char sexo){
    float pesoIdeal;

    if(sexo == 'M' || sexo == 'm'){
        pesoIdeal= 72.7*altura-58;
    }else if(sexo == 'F' || sexo == 'f'){
        pesoIdeal =62.1*altura-44.7;
    }else{
        printf("Voce digitou um sexo invalido\n");
        pesoIdeal=0;
    }
    return pesoIdeal;
}


int main(){
    float altura;
    float resultado;
    char sexo;
    
    printf("Digite seu sexo (M ou F)...");
    scanf("%c", &sexo);

    printf("Digite a sua altura........");
    scanf("%f", &altura);

    resultado = pesoIdeal(altura,sexo);

    printf("O peso ideal para %c e....%.2f\n", sexo, resultado);
    return 0;
}