#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano para verificar: ");
    if (scanf("%d", &ano) != 1) {
        printf("Erro: Por favor, insira um ano valido.\n");
        return 1;
    }

    if (ano % 4 == 0) {
        printf("O ano %d e um ano de eleicao.\n", ano);
    } else {
        printf("O ano %d NAO e um ano de eleicao.\n", ano);
    }

    return 0;
}