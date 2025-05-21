/*Autor.....Joao Victor
  Objetivo..Media Aritmatica de numeros positivos e negativos
  Exercicio: 3*/

#include <stdio.h>

int main()
{
	int num[20];
	int i;
	int somaPositivo =0;
	int somaNegativo = 0;
	int contadorPositivo = 0;
	int contadorNegativo = 0;

	for(i=0; i<20; i++) {
		printf("Insira o %d numero...", i+1);
		scanf("%d", &num[i]);
		if(num[i]>=0) {
			somaPositivo+=num[i];
			contadorPositivo++;
		} else {
			somaNegativo+=num[i];
			contadorNegativo++;
		}

	}

	if (contadorPositivo > 0) {
		printf("A media aritmetica dos numeros positivos e..%d\n", somaPositivo / contadorPositivo);
	} else {
		printf("Nenhum numero positivo foi inserido.\n");
	}

	if (contadorNegativo > 0) {
		printf("A media aritmetica dos numeros negativos e..%d\n", somaNegativo / contadorNegativo);
	} else {
		printf("Nenhum numero negativo foi inserido.\n");
	}


	return 0;
}