/*Autor.....Joao Victor
  Data......08/04/25
  Objetivo..Tema: Cálculo da Soma de Números Inteiros
  Descrição:
  Elabore um algoritmo em Linguagem C que utilize o comando de repetição for para calcular a
  soma de uma sequência de números inteiros. O programa deve solicitar ao usuário que informe
  quantos números ele deseja somar e, em seguida, ler esses números e calcular a soma total.
  Tarefa:
  1. Solicite ao usuário que digite a quantidade de números que deseja somar.
  2. Utilize um loop for para ler cada número informado pelo usuário.
  3. Calcule a soma total dos números informados.
  4. Exiba o resultado da soma.
  Exemplo de Saída:
   Se o usuário informar que deseja somar 3 números e fornecer os números 4, 5 e 6, a
  saída deve ser:
  A soma total é: 15
  Requisitos:
  O algoritmo deve validar a entrada do usuário, garantindo que a quantidade de números
  seja um inteiro positivo.
*/

#include <stdio.h>

int main()
{
    int qtde;
    int soma = 0;
    int num;

    do
    {
        printf("Quantos numeros deseja somar? ");
        scanf("%d", &qtde);
        if (qtde <= 0)
        {
            printf("Por favor, digite um numero inteiro positivo.\n");
        }
    } while (qtde <= 0);

    for (int i = 0; i < qtde; i++)
    {
        printf("Digite o %d numero....", i + 1);
        scanf("%d", &num);
        soma += num;
    }

    printf("A soma dos %d e = %d", qtde, soma);

    return 0;
}