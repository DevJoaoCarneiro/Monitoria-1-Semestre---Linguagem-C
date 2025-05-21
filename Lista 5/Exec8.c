/*Autor..... Joao Victor
  Objetivo.. Classificacao das notas, acima, na media ou a baixo
  Exercicio: 8*/

#include <stdio.h>

int main()
{
	float A[10];
	float soma =0;
	float media;
	int acimaMedia = 0;
	int naMedia = 0;
	int abaixoMedia =0;
	int i;
	
	for(i=0;i<10;i++){
	  printf("Digite a %d do aluno...",i+1);
	  scanf("%f", &A[i]);
	  soma += A[i];
	}
	
	media = soma/10;
	
	for(i=0;i<10;i++){
	  if(A[i] > media){
	    acimaMedia++;
	  }else if(A[i] == media){
	    naMedia++;
	  }else{
	    abaixoMedia++;
	  }
	}

  printf("Numero total de notas..10\n");
  printf("Media das notas........%.2f\n", media);
  printf("Acima da media.........%d\n",acimaMedia);
  printf("Na media...............%d\n",naMedia);
  printf("Abaixo da media........%d\n",abaixoMedia);
  
	return 0;
}