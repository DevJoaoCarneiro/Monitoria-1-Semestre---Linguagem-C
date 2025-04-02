#include <stdio.h>

int main()
{   
    int horaInicial;
    int horaFinal;
    int duracao;

    printf("Insira a hora inicial do jogo (Somente valor inteiro)....");
    scanf("%d", &horaInicial);
    printf("Insira a hora final do jogo (Somente valor inteiro)......");
    scanf("%d", &horaFinal);

    if(horaInicial == horaFinal){
        duracao=24;
    }else if(horaInicial<horaFinal){
        duracao = horaFinal-horaInicial;
    }else{
        duracao = (24- horaInicial)+ horaFinal;
    }

    printf("O jogo durou %d horas", duracao);

    return 0;
}