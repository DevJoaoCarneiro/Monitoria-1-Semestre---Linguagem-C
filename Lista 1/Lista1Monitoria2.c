#include <stdio.h>

int main(){
    float precoLitro = 5.24;
    float litroGasto;
    float consumoMedio;
    float valorGasto;
    int kmPercorridos;

    
    printf("Digite os km percorridos...:");
    scanf("%d", &kmPercorridos);

    printf("Digite o consumo medio.....:");
    scanf("%f", &consumoMedio);

    litroGasto = kmPercorridos/consumoMedio;
    valorGasto = litroGasto*precoLitro;

    printf("Km percorridos...:%d\n", kmPercorridos);
    printf("Consumo medio....:%.2f\n", consumoMedio);
    printf("Litros gasto.....:%.2f\n", litroGasto);
    printf("Valor gasto......:%.2f\n", valorGasto);



    return 0;
}