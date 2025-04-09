/*Autor.....Joao Victor
  Data......08/04/25
  Objetivo..Tema: Armazenamento e Análise de Cargos e Salários
  Descrição:
  Elabore um algoritmo em Linguagem C que armazene a descrição de 10 cargos e seus respectivos
  salários. Ao final da execução, o algoritmo deve informar:
   A descrição do cargo com o maior salário.
   O valor desse maior salário.
  Tarefa:
  1. Ler o Cargo de 10 Funcionários
  2. Ler os salários correspondentes a cada cargo.
  3. Ao final da leitura, identifique e exiba:
   O cargo que possui o maior salário.
   O valor do maior salário.
  Requisitos:
   O algoritmo deve utilizar estruturas de controle apropriadas para ler os dados e determinar
  o cargo com o maior salário.
   Certifique-se de que o programa funcione corretamente para todos os 10 cargos
*/
#include <stdio.h>
#include <string.h>

int main(){
    char cargo[50];
    char cargoMaiorSalario[50];
    float salario;
    float maiorSalario=0;


    for(int i =0; i<10 ;i++){
        printf("Insira seu cargo...");
        fflush(stdin);
        fgets(cargo, 50, stdin);

        printf("Insira seu salario.");
        scanf("%f", &salario);

        if(salario>maiorSalario){
            maiorSalario=salario;
            strcpy(cargoMaiorSalario, cargo);
        }
    }

    printf("O cargo %s tem o maior salario sendo ele de %.2f", cargoMaiorSalario, maiorSalario);



    return 0;
}