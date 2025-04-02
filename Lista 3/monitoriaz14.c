#include <stdio.h>

int main()
{
    int horas_extras;
    int horas_faltas;
    int H;
    float premio;

    printf("Digite o numero de horas extras: ");
    scanf("%d", &horas_extras);

    printf("Digite o numero de horas faltas: ");
    scanf("%d", &horas_faltas);

    H = horas_extras - horas_faltas;

    if (H >= 0 && H <= 10)
    {
        premio = 20.00;
    }
    else if (H > 10 && H <= 20)
    {
        premio = 40.00;
    }
    else if (H > 20 && H <= 30)
    {
        premio = 60.00;
    }
    else if (H > 30 && H <= 40)
    {
        premio = 80.00;
    }
    else if (H > 40 && H <= 100)
    {
        premio = 100.00;
    }
    else
    {
        premio = 0.00;
    }

    printf("O premio de Natal sera de R$ %.2f\n", premio);

    
    return 0;
}