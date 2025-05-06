#include <stdio.h>

int main() {
    int numero, soma = 0, count = 0;

    while (1) {
        printf("Digite um número inteiro (digite um número negativo para parar): ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        soma += numero;
        count++;
    }

    if (count > 0) {
        printf("A média dos valores digitados é: %.2f\n", (float)soma / count);
    } else {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}


