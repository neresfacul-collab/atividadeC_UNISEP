#include <stdio.h>

int main() {
    float peso;
    int valorFrete;

    printf("Digite o peso da encomenda (kg): ");
    if (scanf("%f", &peso) != 1 || peso < 0) {
        printf("Erro: Peso invalido.\n");
        return 1;
    }

    if (peso <= 5.0) {
        valorFrete = 10;
    } 
    else if (peso <= 20.0) {
        valorFrete = 20;
    } 
    else {
        valorFrete = 50;
    }

    printf("Peso: %.2f kg\n", peso);
    printf("Valor do Frete: R$ %d,00\n", valorFrete);

    return 0;
}