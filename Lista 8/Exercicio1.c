#include <stdio.h>

void opcao()
{
    printf("Menu de opcoes\n");
    printf("Digite 'A' para media aritmetica\n");
    printf("Digite 'P' para media ponderada\n");
    printf("Digite 'H' para media harmonica\n");
    printf("Digite sua resposta...");
}

float calculoMedia(float nota1, float nota2, float nota3, char letra)
{
    float media;

    switch (letra)
    {
    case 'A':
        printf("Media aritmetica\n");
        media = (nota1 + nota2 + nota3) / 3.0;
        break;
    case 'P':
        printf("Media ponderada\n");
        media = ((nota1 * 5.0) + (nota2 * 3.0) + (nota3 * 2.0))/10;
        break;
    case 'H':
        printf("Media Harmonica\n");
        media = 3 / ((1 / nota1) + (1 / nota2) + (1 / nota3));
        break;
    }

    return media;
}

int main()
{
    float notas[3];
    float media;
    char letra;
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Digite a %d nota...", i + 1);
        scanf("%f", &notas[i]);
    }

    opcao();
    getchar();
    scanf("%c", &letra);
    media = calculoMedia(notas[0], notas[1], notas[2], letra);

    printf("A media e de...%.2f", media);

    return 0;
}