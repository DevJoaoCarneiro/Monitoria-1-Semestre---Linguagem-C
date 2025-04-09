/*Autor....Joao Victor
  Objetivo. Ler duas variáveis A e B, se a variável A for menor que B, fazer Y= B – A, se B for menor que A fazer Y= A – B,
  caso sejam iguais fazer Y = A + B, imprimir no final os valores de A, B e Y. 
*/

#include <stdio.h>

int main(){
    int a;
    int b;
    int y;

        printf("Insira o valor de a...");
        scanf("%d", &a);
        printf("Insira o vlaor de b...");
        scanf("%d", &b);

        if(a<b){
            y= b-a;
        }else if(a==b){
            y= a+b;
        }else{
            y= a-b;
        }

        printf("Valor de A...%d\n",a);
        printf("Valor de B...%d\n",b);
        printf("Valor de Y...%d\n",y);

    return 0;
}