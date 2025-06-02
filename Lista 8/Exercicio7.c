#include <stdio.h>

int somatorio(int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    return soma;
}

int main() {
    int valor;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Erro: o valor deve ser positivo.\n");
    } else {
        int resultado = somatorio(valor);
        printf("O somatorio de 1 ate %d eh: %d\n", valor, resultado);
    }

    return 0;
}
