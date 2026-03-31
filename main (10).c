#include <stdio.h>

int main() {
    float salarioBase, salarioFinal;

    printf("Digite o salario atual: R$ ");
    if (scanf("%f", &salarioBase) != 1 || salarioBase < 0) {
        printf("Erro: Insira um valor de salario valido.\n");
        return 1;
    }

    if (salarioBase > 3000.00) {
        salarioFinal = salarioBase * 1.05;
        printf("Bonus aplicado: 5%%\n");
    } else {
        salarioFinal = salarioBase * 1.10;
        printf("Bonus aplicado: 10%%\n");
    }

    printf("Salario final com bonus: R$ %.2f\n", salarioFinal);

    return 0;
}