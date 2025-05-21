/*Autor.....Joao Victor
  Objetivo..Imprimir o vetor na ordem inversa
  Exercicio.1*/

#include <stdio.h>

int main()
{
    int num[10];
    int i;
    
    for(i=0;i<10;i++){
      printf("Insira o %d numero...", i+1);
      scanf("%d", &num[i]);
    }
    
    for(i=9;i>=0;i--){
      printf("[%d] ", num[i]);
      
    }
    
    return 0;
}