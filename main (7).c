#include <stdio.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    if (scanf("%f", &numero) != 1) {
        printf("Erro: Entrada invalida.\n");
        return 1;
    }

    if (numero > 0) {
        printf("O numero %.2f e POSITIVO.\n", numero);
    } 
    else if (numero < 0) {
        printf("O numero %.2f e NEGATIVO.\n", numero);
    } 
    else {
        printf("O numero e ZERO.\n");
    }

    return 0;
}