#include <stdio.h>

int retornoEmDias(int anos, int meses, int dias){
    return (anos*365)+(meses*30)+dias;
}

int main()
{
    int anos, meses, dias, totalDias;

    printf("Digite sua idade:\n");
    printf("Anos...:");
    scanf("%d", &anos);
    printf("Meses..:");
    scanf("%d", &meses);
    printf("Dias...:");
    scanf("%d", &dias);

    totalDias = retornoEmDias(anos, meses, dias);

    printf("Sua idade em dias e: %d dias\n", totalDias);

    return 0;
}