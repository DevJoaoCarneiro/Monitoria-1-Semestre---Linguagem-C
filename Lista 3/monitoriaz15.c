#include <stdio.h>

int main()
{
    int opcao;
    float x;
    float y;
    float z;
    float area;

    printf("MENU DE OPCOES\n");
    printf("1-Calculo da area do circulo\n");
    printf("2-Calculo da area do retangulo\n");
    printf("3-Calculo da area do trapezio\n");
    printf("4-Calculo da area do triangulo\n");
    printf("Insira aqui sua resposta...");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calculo area do circulo\n");
        printf("Insira o raio...");
        scanf("%f", &x);
        area = (x*x)*3.14;
        printf("A area do circulo de raio %.2f e igual a %.2f m2\n", x, area);
        break;
    case 2:
        printf("Calculo area do retangulo\n");
        printf("Insira a base.....");
        scanf("%f", &x);
        printf("Insira a altura...");
        scanf("%f", &y);
        area = x*y;
        printf("A area do retangulo de base %.2f e altura %.2f e igual a %.2f m2\n", x, y, area);
        break;
    case 3:
        printf("Calculo area do trapezio\n");
        printf("Insira a base maior.....");
        scanf("%f", &x);
        printf("Insira a base menor.....");
        scanf("%f", &y);
        printf("Insira a altura...");
        scanf("%f", &z);
        area = ((x+y)*z)/2;
        printf("A area do trapezio de base maior %.2f de base menor %.2f e altura %.2f e igual a %.2f m2\n", x, y, z, area);
        break;
    case 4:
        printf("Calculo area do triangulo\n");
        printf("Insira a base.....");
        scanf("%f", &x);
        printf("Insira a altura...");
        scanf("%f", &y);
        area = (x*y)/2;
        printf("A area do triangulo de base  %.2f  e altura %.2f e igual a %.2f m2\n", x, y, area);
        break;
    default:
        printf("O numero inserido e invalido\n");
        break;
    }

    return 0;
}