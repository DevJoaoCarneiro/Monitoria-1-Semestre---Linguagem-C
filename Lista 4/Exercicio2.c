/*Autor.....Joao Victor
  Data......08/04/25
  Objetivo..Apresentar os resultados de uma tabuada de um número qualquer. Esta deverá ser impressa no
  seguinte formato:
  Considerando como exemplo o fornecimento do número 02.
  2 x 1 = 2
  2 x 2 = 4
*/

#include <stdio.h>

int main(){
    int i;
    int num;

    printf("Digite o numero da tabuada que deseja consultar...");
    scanf("%d", &num);

    for(i=0; i<=10;i++){
        printf("%d X %d = %d\n", num, i, num*i);
    }


    return 0;
}