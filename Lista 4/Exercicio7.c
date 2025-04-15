/*Autor.....Joao Victor
  Data......08/04/25
  Objetivo..Tema: Análise de Alturas de Alunos
  Descrição:
  Elabore um algoritmo em Linguagem C que leia 5 conjuntos de 2 valores, onde o primeiro valor
  representa o número de um aluno e o segundo representa sua altura em centímetros. O
  algoritmo deve identificar:
  1. O aluno mais alto e o aluno mais baixo.
  2. Exibir o número do aluno mais alto e do aluno mais baixo, juntamente com suas
  respectivas alturas.
  Tarefa:
  1. Crie um loop para ler os dados de 5 alunos.
  2. Armazene o número do aluno e sua altura em variáveis apropriadas.
  3. Após a leitura, determine e exiba:
   O número e a altura do aluno mais alto.
   O número e a altura do aluno mais baixo.
  Requisitos:
   O algoritmo deve usar estruturas de controle adequadas para a leitura dos dados e a
  identificação dos alunos.
   Certifique-se de que o programa funcione corretamente para todos os 5 conjuntos de
  dados. 
*/

#include <stdio.h>

int main(){
    int codigo;
    int maisAltoNumero=0;
    int maisBaixoNumero=0;
    float altura;
    float maiorAltura=0;
    float menorAltura=0;


    for(int i=0;i<5;i++){
        printf("Digite o codigo do %d aluno...",i+1);
        scanf("%d", &codigo);

        printf("Digite a altura do %d aluno...",i+1);
        scanf("%f", &altura);

        if(i==0){
            //Primeiro aluno cadastrado
            maisAltoNumero= codigo;
            maisBaixoNumero = codigo;
            maiorAltura=altura;
            menorAltura=altura;
        }else{
            if(altura>maiorAltura){
                maiorAltura = altura;
                maisAltoNumero = codigo;
            }
            if(altura<menorAltura){
                menorAltura = altura;
                maisBaixoNumero = codigo;
            }
        }
    }

    printf("\n--- Resultado ---\n");
    printf("Aluno mais alto: Numero %d com altura %.2f cm\n",maisAltoNumero, maiorAltura);
    printf("Aluno mais baixo: Numero %d com altura %.2f cm\n", maisBaixoNumero, menorAltura);

    return 0;
}
