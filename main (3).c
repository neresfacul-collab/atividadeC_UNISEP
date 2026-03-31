#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota do aluno (0 a 10): ");
    if (scanf("%f", &nota) != 1) {
        printf("Erro: Insira um valor numerico valido.\n");
        return 1;
    }

    if (nota < 0 || nota > 10) {
        printf("Nota invalida! A nota deve estar entre 0 e 10.\n");
    } 

    else if (nota >= 7.0) {
        printf("Status: Aprovado\n");
    } else if (nota >= 5.0) {
        printf("Status: Recuperacao\n");
    } else {
        printf("Status: Reprovado\n");
    }

    return 0;
}