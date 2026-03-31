#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    if (scanf("%d", &ano) != 1) {
        printf("Erro: Entrada invalida.\n");
        return 1;
    }

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("O ano %d e BISSEXTO.\n", ano);
    } else {
        printf("O ano %d NAO E BISSEXTO.\n", ano);
    }

    return 0;
}