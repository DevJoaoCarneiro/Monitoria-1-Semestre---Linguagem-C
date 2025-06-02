#include <stdio.h>

int contarDivisores(int numero) {
    int contador = 0;

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int valor;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Erro: o valor deve ser inteiro e positivo.\n");
    } else {
        int divisores = contarDivisores(valor);
        printf("O numero de divisores de %d e: %d\n", valor, divisores);
    }

    return 0;
}
