/*Autor.....Joao Victor
  Data......24/03/25
  Objetivo..Exec 6*/
  #include <stdio.h>

  int main(){
    int horasTrabalhasMes;
    int numFilhos;
    float valorPorHora;
    float salario;

    printf("Horas trabalhadas no mes...:");
    scanf("%d", &horasTrabalhasMes);
    printf("Valor recibido por hora....:");
    scanf("%f", &valorPorHora);
    printf("Numero de filhos < 14......:");
    scanf("%d", &numFilhos);
    
    salario = (horasTrabalhasMes*valorPorHora)+(numFilhos*13.48);

    printf("O salario e de .........%.2f",salario);

    return 0;
  }