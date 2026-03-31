#include <stdio.h>

int main() {
    float velocidade;

    printf("Digite a velocidade registrada (km/h): ");
    if (scanf("%f", &velocidade) != 1 || velocidade < 0) {
        printf("Erro: Velocidade invalida.\n");
        return 1;
    }

    if (velocidade <= 60.0) {
        printf("Velocidade dentro do limite. Sem multa.\n");
    } 
    else if (velocidade <= 80.0) {
        printf("Status: MULTA LEVE\n");
    } 
    else if (velocidade <= 100.0) {
        printf("Status: MULTA GRAVE\n");
    } 
    else {
        printf("Status: MULTA GRAVISSIMA\n");
    }

    return 0;
}