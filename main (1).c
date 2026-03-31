#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) != 1) {
        printf("Erro: Por favor, insira um numero valido.\n");
        return 1;
    }

    if (numero % 2 == 0) {
        printf("O numero %d e PAR.\n", numero);
    } else {
        printf("O numero %d e IMPAR.\n", numero);
    }

    return 0;
}