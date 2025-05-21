/*Autor..... Joao Victor
  Objetivo.. Conversão Temperatura celsius fahrenheit
  Exercicio: 6*/

#include <stdio.h>

int main()
{
	float A[25];
	float B[25];
	int i;
	
	for(i=0;i<25;i++){
	  printf("Digite o %d valor em celcius...",i+1);
	  scanf("%f", &A[i]);
	}
	
	for(i=0;i<25;i++){
	  B[i] = (A[i] * 1.8) + 32;
	}
	
	//Imprimindo celsius
	for(i=0;i<25;i++){
	  printf("[%.2f] ", A[i]);
	}
	printf("\n\n");
	
	//Imprimindo fahrenheit
	for(i=0;i<25;i++){
	  printf("[%.2f] ", B[i]);
	}
	
	

	return 0;
}