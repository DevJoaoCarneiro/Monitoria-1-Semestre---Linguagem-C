/*Autor.....Joao Victor
  Objetivo..Encontrar o menor e maior numero
  Exercicio: 4*/

#include <stdio.h>

int main()
{
	int num[10];
	int i;
	int maiorNumero=0;
	int menorNumero=0;

	for(i=0; i<10; i++) {
		printf("Insira o %d valor...",i+1);
		scanf("%d", &num[i]);

		if(i==0) {
			maiorNumero=num[i];
			menorNumero=num[i];
		}

		if(num[i]>maiorNumero) {
			maiorNumero= num[i];
		}

		if(num[i]<menorNumero) {
			menorNumero= num[i];
		}

	}

	printf("O maior numero do vetor e %d e o menor numero %d\n", maiorNumero, menorNumero);

	return 0;
}