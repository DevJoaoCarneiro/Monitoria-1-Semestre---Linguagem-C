/*Autor.....Joao Victor
  Objetivo..Quadrado dos elementos do vetor
  Exercicio: 2*/

#include <stdio.h>

int main()
{
    int A[15];
    int B[15];
    int i;
    
    for(i=0;i<15;i++){
      printf("Insira o %d numero...", i+1);
      scanf("%d", &A[i]);
    }
    
    for(i=0;i<15;i++){
      B[i] = A[i] * A[i];
    }
    
    //Mostrando vetor A
    for(i=0;i<15;i++){
      printf("[%d] ", A[i]);
    }
    
    printf("\n\n");
    
    //Mostrando vetor B
    for(i=0;i<15;i++){
      printf("[%d] ", B[i]);
    }
    
    return 0;
}