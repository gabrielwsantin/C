#include <stdio.h>

int main() {
    char primeiroNome[50], sobrenome[50];

    // Solicita o primeiro nome e o sobrenome
    printf("Digite o primeiro nome: ");
    scanf("%s", primeiroNome);

    printf("Digite o sobrenome: ");
    scanf("%s", sobrenome);

    // Exibe os nomes na tela
    printf("Primeiro nome: %s\n", primeiroNome);
    printf("Sobrenome: %s\n", sobrenome);
    
return 0;
}
