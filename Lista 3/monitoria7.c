#include <stdio.h>

int main()
{   
    char nome[50];
    char sexo;

    printf("Insira seu nome..........");
    fflush(stdin);
    fgets(nome, 50, stdin);
    printf("Insira seu sexo (M-F)....");
    scanf(" %c", &sexo);

    if(sexo == 'M' || sexo == 'm'){
        printf("ILMA SR\n");
    }else{
        printf("ILMA SRA\n");
    }
    return 0;
}