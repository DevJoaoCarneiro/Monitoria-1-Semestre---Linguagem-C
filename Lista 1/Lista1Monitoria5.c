#include <stdio.h>

int main(){
    /*Salario*/
    float salarioMinimo = 1518.50;
    float salarioBruto;
    float salarioLiquido;
    float lucroLoja;

    /*Custo*/
    float custoBicicleta;
    float precoVenda;

    /*Comissao*/
    float comissaoTotal;
    float comissaoPorFuncionario;

    /*Numero vendas e empregados*/
    int numVendaBicicleta;
    int numEmpregados;
    
    printf("Insira o numero de empregados...:");
    scanf("%d", &numEmpregados);
    printf("Insira o custo da bicicleta.....:");
    scanf("%f", &custoBicicleta);
    printf("Numero de bicicletas vendidas...:");
    scanf("%d", &numVendaBicicleta);

    //Preco de venda da bicicleta
    precoVenda = custoBicicleta+(custoBicicleta*0.50);
    //Comissao total
    comissaoTotal = numVendaBicicleta*(custoBicicleta*0.15);
    //Salario bruto
    salarioBruto = salarioMinimo*2;
    //Comissao por funcionario
    comissaoPorFuncionario = comissaoTotal/numEmpregados;
    //Salario Liquido
    salarioLiquido = salarioBruto+comissaoPorFuncionario;
    //Lucro loja
    lucroLoja = (precoVenda-custoBicicleta)*numVendaBicicleta-comissaoTotal;

    printf("Salario final do empregado....%.2f\n",salarioLiquido);
    printf("Lucro liquido da loja.........%.2f\n",lucroLoja);

    return 0;
}