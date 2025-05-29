#include <stdio.h>

int main(){

    int i;
    int numeros[] = {2, 5, 8, 13, 1, 11,};
    int tamanho = sizeof(numeros) / sizeof (numeros[0]);

    int menor = numeros[0];
    int maior = numeros[0];

        for(int i = 1; i < tamanho; i++) {

         if (numeros[i] < menor) {
            menor = numeros[i];
         }
            if (numeros[i] > maior) {
            maior = numeros[i];
        }

        }

    printf("Menor valor do array: %d\n", menor);
    printf("Maior valor do array: %d\n", maior);

    return 0;
}
