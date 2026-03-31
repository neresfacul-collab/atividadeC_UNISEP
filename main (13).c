#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    if (scanf("%d", &idade) != 1 || idade < 0) {
        printf("Erro: Idade invalida.\n");
        return 1;
    }

    if (idade < 16) {
        printf("Situacao: Nao pode votar.\n");
    } 
    else if (idade >= 18 && idade <= 70) {
        printf("Situacao: Voto obrigatorio.\n");
    } 
    else {
        printf("Situacao: Voto opcional.\n");
    }

    return 0;
}