#include <stdio.h>

int main() {
    int decibeis;

    printf("Ruído medido no cruzamento decibéis: ");
    scanf("%d", &decibeis);

    if (decibeis >= 0 && decibeis <= 40) {
        printf("Ruido: baixo\n");
    } else if (decibeis >= 41 && decibeis <= 80) {
        printf("Ruido: moderado\n");
    } else if (decibeis >= 81 && decibeis <= 100) {
        printf("Ruido: alto\n");
    } else if (decibeis >= 101 && decibeis <= 120) {
        printf("Ruido: muito alto\n");
    } else if (decibeis > 120) {
        printf("Classificação: ensurdecedor\n");
    } else {
        printf("Valor inválido. Informe um número maior ou igual a 0.\n");
    }

}
