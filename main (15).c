#include <stdio.h>

int main() {
    float temperatura;

    printf("Digite a temperatura atual (Celsius): ");
    if (scanf("%f", &temperatura) != 1) {
        printf("Erro: Insira um valor numerico valido.\n");
        return 1;
    }

    if (temperatura < 15.0) {
        printf("Clima: Frio\n");
    } 
    else if (temperatura <= 25.0) {
        printf("Clima: Agradavel\n");
    } 
    else {
        printf("Clima: Quente\n");
    }

    return 0;
}