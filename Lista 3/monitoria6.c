#include <stdio.h>

int main()
{   int num;

    printf("Insira um numero....");
    scanf("%d", &num);

    if(num%2==0){
        printf("Numero e par");
    }else{
        printf("Numero e impar");
    }

    return 0;
}