/*Autor..... Joao Victor
  Objetivo.. Soma de numeros maiores que a media
  Exercicio: 5*/

#include <stdio.h>

int main()
{
	int num[10];
	int soma = 0;
	int somaMaiorMedia =0;
	float media;
	int i;

	for(i=0; i<10; i++) {
		printf("Insira o %d valor...",i+1);
		scanf("%d", &num[i]);

		soma += num[i];
	}

  media = soma/10;
  
  printf("A media dos numeros no vetor e............%.2f\n", media);
  
  for(i=0; i<10; i++) {
	  if(num[i]>media){
	    somaMaiorMedia += num[i];
	  }
	}
	printf("A soma dos valores maiores que a media e..%d\n", somaMaiorMedia);

	return 0;
}