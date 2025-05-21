/*Autor..... Joao Victor
  Objetivo.. Inverter um vetor
  Exercicio: 7*/

#include <stdio.h>

int main()
{
	float A[8];
	float B[8];
	int i;
	
	for(i=0;i<8;i++){
	  printf("Digite o %d do vetor...",i+1);
	  scanf("%f", &A[i]);
	}
	
	
	for(i=0;i<8;i++){
	  B[i] = A[7-i];
	}
	
	//Mostrando o vetor A
	printf("Vetor original A\n");
	for(i=0;i<8;i++){
	  printf("[%.2f] ", A[i]);
	}
	
	printf("\n\n");
	
	printf("Vetor invertido B\n");
	//Mostrando o vetor B
	for(i=0;i<8;i++){
	  printf("[%.2f] ", B[i]);
	}

	return 0;
}