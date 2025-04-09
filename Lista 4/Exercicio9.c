/*Autor.....Joao Victor
  Data......08/04/25
  Objetivo..Tema: Análise de Dados da População
  Descrição:
  A prefeitura de uma cidade realizou uma pesquisa entre seus habitantes, coletando dados sobre
  o salário e o número de filhos. Com base nessa pesquisa, a prefeitura deseja obter as seguintes
  informações:
  1. Média do salário da população.
  2. Média do número de filhos.
  3. Maior salário registrado.
  4. Percentual de pessoas com salário até R$100,00.
  Tarefa:
  Elabore um algoritmo em Linguagem C que:
   Leia repetidamente o salário e o número de filhos de cada habitante.
   Calcule e exiba:
   A média do salário da população.
*/

#include <stdio.h>

int main(){
    //Salario
    float salario;
    float maiorSalario=0;

    //Media
    float mediaSalario=0;
    float mediaNumFilhos = 0;
    float porcentagemMenor100 = 0;

    //Contadores
    float contador=0;
    float salarioMenor100=0;

    //Numero de filhos
    int numFilhos;

    //Cadastrar outro funcionario
    int cadastrar;

    do{
    printf("Digite seu salario........");
    scanf("%f", &salario);

    printf("Digite o numero de filhos.");
    scanf("%d", &numFilhos);

    printf("Cadastrar outro usuario? (1-Sim 2-Nao)...");
    scanf("%d", &cadastrar);

    if(salario>maiorSalario){
        maiorSalario=salario;
    }

    if(salario<=1000){
        salarioMenor100++;
    }

    mediaSalario+=salario;
    mediaNumFilhos+=numFilhos;
    contador++;
    }while(cadastrar==1);

    mediaSalario = mediaSalario/contador;
    mediaNumFilhos = mediaNumFilhos/contador;
    porcentagemMenor100 = (salarioMenor100/contador)*100;

    printf("\n--- Resultados da Pesquisa ---\n");
    printf("Media do salario da populacao: R$ %.2f\n", mediaSalario);
    printf("Media do numero de filhos: %.2f\n", mediaNumFilhos);
    printf("Maior salario registrado: R$ %.2f\n", maiorSalario);
    printf("Percentual de pessoas com salario ate R$100: %.2f%%\n", porcentagemMenor100);
    



    return 0;
}