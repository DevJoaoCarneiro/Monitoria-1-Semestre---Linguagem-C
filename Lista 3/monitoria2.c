#include <stdio.h>

int main(){
    float salarioBruto;
    float salarioLiquido;
    float premio;
    float baseInss;
    float baseIR;
    float rendimento;
    float descontoInss=0;
    float descontoIr=0;
    int taxaInss;
    int taxaIr;

    printf("Insira o salario bruto...................");
    scanf("%f", &salarioBruto);
    printf("Insira o premio recebido.................");
    scanf("%f", &premio);
    printf("Insira a base do INSS....................");
    scanf("%f", &baseInss);
    printf("Insira a base do IR......................");
    scanf("%f", &baseIR);
    printf("Insira a taxa INSS em numero inteiro.....");
    scanf("%d", &taxaInss);
    printf("Insira a taxa do IR em numero inteiro....");
    scanf("%d", &taxaIr);

    rendimento = salarioBruto+premio;

    if(rendimento > baseInss){
        descontoInss = (rendimento*taxaInss)/100;
    }

    if(rendimento-descontoInss>baseIR){
        descontoIr = ((rendimento-descontoInss)*taxaIr)/100;
    }
    
    salarioLiquido = rendimento-descontoInss-descontoIr;

    printf("O salario liquido e.....%.2f", salarioLiquido);

    return 0;
}