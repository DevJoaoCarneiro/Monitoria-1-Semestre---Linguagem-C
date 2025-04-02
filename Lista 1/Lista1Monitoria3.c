#include <stdio.h>

int main(){
    float precoGasolina= 5.24;
    float consumoMedio;
    float lucroBruto;
    float lucroLiquido;
    int hodometroInicio;
    int hodometroFinal;
    int distanciaPercorrida;
    
    printf("Insira a marcacao do hodometro inicial....");
    scanf("%d", &hodometroInicio);
    printf("Insira a marcacao do hodometro final......");
    scanf("%d", &hodometroFinal);
    printf("Digite seu lucro bruto....................");
    scanf("%f", &lucroBruto);
    printf("Digite a media de consumo.................");
    scanf("%f", &consumoMedio);

    distanciaPercorrida =  hodometroFinal-hodometroInicio;
    lucroLiquido = lucroBruto-(precoGasolina*(distanciaPercorrida/consumoMedio));

    printf("=============================================================\n");
    printf("A marcacao do hodometro inicial foi.......%dKm\n", hodometroInicio);
    printf("A marcacao do hodometro final foi.........%dKm\n", hodometroFinal);
    printf("A distancia percorrida foi................%dKm\n",distanciaPercorrida);
    printf("O lucro bruto foi de .....................R$ %.2f\n",lucroBruto);
    printf("O lucro liquido foi de ...................R$ %.2f\n",lucroLiquido);



    return 0;
}