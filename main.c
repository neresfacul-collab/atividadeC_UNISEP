#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    if (scanf("%d", &idade) != 1) {
        printf("Por favor, insira um numero valido.\n");
        return 1;
    }

    if (idade < 0) {
        printf("Idade invalida.\n");
    } else if (idade <= 12) {
        printf("Categoria: Crianca\n");
    } else if (idade <= 17) {
        printf("Categoria: Adolescente\n");
    } else if (idade <= 59) {
        printf("Categoria: Adulto\n");
    } else {
        printf("Categoria: Idoso\n");
    }

    return 0;
}