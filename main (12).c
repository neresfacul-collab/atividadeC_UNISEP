#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota do aluno (0 a 10): ");
    if (scanf("%f", &nota) != 1) {
        printf("Erro: Entrada invalida.\n");
        return 1;
    }

    if (nota < 0 || nota > 10) {
        printf("Nota invalida! Insira um valor entre 0 e 10.\n");
    } 
    else if (nota >= 9.0) {
        printf("Conceito: A\n");
    } 
    else if (nota >= 7.0) {
        printf("Conceito: B\n");
    } 
    else if (nota >= 5.0) {
        printf("Conceito: C\n");
    } 
    else {
        printf("Conceito: D\n");
    }

    return 0;
}