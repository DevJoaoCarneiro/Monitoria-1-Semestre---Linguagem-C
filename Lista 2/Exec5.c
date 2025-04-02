/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Exec 5*/
#include <stdio.h>

int main()
{
    int valor1;
    int valor2;
    int valor3;
    float mediaAritmedica;
    float mediaHarmonica;

    printf("Insira o 1 valor...:");
    scanf("%d", &valor1);
    printf("Insira o 2 valor...:");
    scanf("%d", &valor2);
    printf("Insira o 3 valor...:");
    scanf("%d", &valor3);

    mediaAritmedica = (valor1 + valor2 + valor3) / 3.0;
    mediaHarmonica = 3.0 / ((1.0 / valor1) + (1.0 / valor2) + (1.0 / valor3));

    printf("A media aritmedica e de....%.2f\n", mediaAritmedica);
    printf("A media harmonica e de.....%.2f\n", mediaHarmonica);

    return 0;
}