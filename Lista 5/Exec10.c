/*Autor..... Joao Victor
  Objetivo.. Transpocicao de uma matriz
  Exercicio: 10*/

#include <stdio.h>

int main()
{
	int matriz[2][3];
	int matrizTransposta[3][2];
	int i;
	int j;
	
	for(i=0;i<2;i++){
	  for(j=0;j<3;j++){
	    printf("Digite o numero i = %d j = %d...", i,j);
	    scanf("%d", &matriz[i][j]);
	  }
	}
	
	for(i=0;i<2;i++){
	  for(j=0;j<3;j++){
	    matrizTransposta[j][i] = matriz[i][j];
	  }
	}
  
  for(i=0;i<2;i++){
	  for(j=0;j<3;j++){
	    printf("[%2d] ", matriz[i][j]);
	  }
	  printf("\n");
	}
	
	printf("\n\n");
	
	for(i=0;i<3;i++){
	  for(j=0;j<2;j++){
	    printf("[%2d] ", matrizTransposta[i][j]);
	  }
	  printf("\n");
	}
  
  
	return 0;
}