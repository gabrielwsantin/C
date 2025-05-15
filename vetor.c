#include <stdio.h>

int main(){
    float temp[10];
    int vetor[10] = {3, 23, 7, 1, 14, -9, 16};
    int inicio = 1, fim = 5, i;

    for(i = inicio; i <= fim; i++){
        temp[i - inicio] = vetor[i];
        printf("vetor[%d] = %d ", i, vetor[i]);
        printf("temp[%d] = %d\n", i - inicio, temp[i - inicio]);


    }






    return 0;}
