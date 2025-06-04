#include <stdio.h>

int uniaoVetor(int num[10], int num2[10], int vetorUniao[20]){
    int i;
    int j;
    int k = 0;
    int existe;

    for(i=0;i<10;i++){
        existe = 0;
        for(j=0; j<k; j++){
            if(vetorUniao[j] == num[i]){
                existe = 1;
                break;
            }
        }

        if (existe == 0) {
            vetorUniao[k] = num[i];
            k++; 
        }
    }

    for(i=0;i<10;i++){
        existe = 0;
        for(j=0; j<k; j++){
            if(vetorUniao[j] == num2[i]){
                existe = 1;
                break;
            }
        }

        if (existe == 0) {
            vetorUniao[k] = num2[i];
            k++; 
        }
    }

    return k;
}

int main() {
    int num[10] = {1,3,5,7,9,10,12,14,15,18};
    int num2[10] = {1,5,7,9,12,14,15,19,22,31};
    int uniao[20];
    int tamanho;



    tamanho = uniaoVetor(num,num2,uniao);

    printf("Vetor uniao:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", uniao[i]);
    }
    printf("\n");

    return 0;
}
