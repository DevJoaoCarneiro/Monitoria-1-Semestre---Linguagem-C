/*Autor..... Joao Victor
  Objetivo.. Soma das diagonais de uma matriz 4x4
  Exercicio: 9*/

#include <stdio.h>

int main()
{
	int matriz[4][4];
	int somaDiagonalPrincipal = 0;
	int somaDiagonalSecundaria = 0;
	int i;
	int j;
	
	for(i=0;i<4;i++){
	  for(j=0;j<4;j++){
	    printf("Digite o numero i = %d j = %d...", i,j);
	    scanf("%d", &matriz[i][j]);
	  }
	}
  
  for(i=0;i<4;i++){
	  for(j=0;j<4;j++){
	    
	    printf("[%2d] ", matriz[i][j]);
	    //Diagonal Principal
	    if(i==j){
	      somaDiagonalPrincipal+= matriz[i][j];
	    }
	    
	    //Diagonal Secundaria
	    if(i + j == 3){
	      somaDiagonalSecundaria += matriz[i][j];
	    }
	  }
	  printf("\n");
	}
	
	printf("A soma da diagonal principal...%d\n",somaDiagonalPrincipal);
	printf("A soma da diagonal secundaria..%d\n",somaDiagonalSecundaria);
  
	return 0;
}