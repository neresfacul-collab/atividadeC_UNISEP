#include <stdio.h>

int main() {
    float consumo, valorTotal;

    printf("Digite o consumo de energia (kWh): ");
    if (scanf("%f", &consumo) != 1 || consumo < 0) {
        printf("Erro: Por favor, insira um valor de consumo valido.\n");
        return 1;
    }

    if (consumo <= 100) {
        valorTotal = consumo * 0.50;
    } 
    else if (consumo <= 200) {
        valorTotal = consumo * 0.75;
    } 
    else {
        valorTotal = consumo * 1.00;
    }

    printf("Consumo: %.2f kWh\n", consumo);
    printf("Valor total da conta: R$ %.2f\n", valorTotal);

    return 0;
}