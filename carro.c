#include <stdio.h>

int main() {
    float distancia, combustivel, consumo;

    printf("Distância total percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Combustível gasto (em litros): ");
    scanf("%f", &combustivel);

    consumo = distancia / combustivel;

    printf("Consumo médio: %.1f km/l\n", consumo);


}
