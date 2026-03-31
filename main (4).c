#include <stdio.h>

int main() {
    float valorCompra, valorFinal;

    printf("Digite o valor da compra (R$): ");
    if (scanf("%f", &valorCompra) != 1 || valorCompra < 0) {
        printf("Erro: Insira um valor numerico valido.\n");
        return 1;
    }

    if (valorCompra > 100.00) {
        valorFinal = valorCompra * 0.90;
        printf("Desconto aplicado: 10%%\n");
    } else {
        valorFinal = valorCompra * 0.95;
        printf("Desconto aplicado: 5%%\n");
    }

    printf("O valor final da compra e: R$ %.2f\n", valorFinal);

    return 0;
}