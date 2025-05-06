#include <stdio.h>

int main() {
    int numero, soma = 0, count = 0;

    while (1) {
        printf("Digite um n�mero inteiro (digite um n�mero negativo para parar): ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        soma += numero;
        count++;
    }

    if (count > 0) {
        printf("A m�dia dos valores digitados �: %.2f\n", (float)soma / count);
    } else {
        printf("Nenhum n�mero v�lido foi digitado.\n");
    }

    return 0;
}


