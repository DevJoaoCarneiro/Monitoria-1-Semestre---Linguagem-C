/*Autor.....Joao Victor
  Data......08/04/25
  Objetivo..Tema: Contagem de Votos em uma Eleição Presidencial
  Descrição:
  Em uma eleição presidencial, há quatro candidatos. Os votos são informados através de
  códigos, conforme a seguinte codificação:
   1: Voto para o Candidato 1
   2: Voto para o Candidato 2
   3: Voto para o Candidato 3
   4: Voto para o Candidato 4
   5: Voto Nulo
   6: Voto em Branco
  Tarefa:
  Elabore um Programa em Linguagem C que realize as seguintes operações:
  1. Leia o código do voto do Eleitor
  2. Calcule e exiba:
   O total de votos para cada um dos quatro candidatos.
   O total de votos nulos.
   O total de votos em branco.
  A entrada de votos deve ser finalizada ao receber o valor 0.
  Requisitos:
   O programa deve ser capaz de lidar com entradas contínuas até que o valor finalizador
  0) seja informado.
   Utilize estruturas de controle adequadas para realizar a contagem dos votos.
  Observação.: Utilizar comando de Repetição DO-WHILE
*/

#include <stdio.h>
#include <windows.h>

int main()
{
    int resposta,codigo;
    int candidato1 = 0;
    int candidato2 = 0;
    int candidato3 = 0;
    int candidato4 = 0;
    int votoNulo = 0;
    int votoBranco = 0;

    do
    {
        system("cls");
        printf("====== URNA ELETRÔNICA ======\n");
        printf("Digite o codigo do eleitor....");
        scanf("%d", &codigo);
        printf("1)Voto para candidato 1\n");
        printf("2)Voto para candidato 2\n");
        printf("3)Voto para candidato 3\n");
        printf("4)Voto para candidato 4\n");
        printf("5)Voto nulo\n");
        printf("6)Voto branco\n");
        printf("0)Encerrar votacao\n");

        printf("Digite sua resposta...");
        scanf("%d", &resposta);

        switch (resposta)
        {
        case 0:
            printf("**Votacao encerrada**\n");
            break;
        case 1:
            candidato1++;
            break;
        case 2:
            candidato2++;
            break;
        case 3:
            candidato3++;
            break;
        case 4:
            candidato4++;
            break;
        case 5:
            votoNulo++;
            break;
        case 6:
            votoBranco++;
            break;
        default:
            printf("Voto invalido!!\n");
            break;
        }

    } while (resposta != 0);

    printf("==============================\n");
    printf("   **Contagem de votos**\n");
    printf("Candidato 1...%d\n", candidato1);
    printf("Candidato 2...%d\n", candidato2);
    printf("Candidato 3...%d\n", candidato3);
    printf("Candidato 4...%d\n", candidato4);
    printf("Voto nulo ....%d\n", votoNulo);
    printf("Voto branco...%d\n", votoBranco);

    return 0;
}