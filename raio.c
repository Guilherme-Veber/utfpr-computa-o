#include <stdio.h>

int main() {
    float tempo, distancia;
    const float velocidade_som = 340.0; // em m/s

    printf("Informe o tempo em segundos entre ver o raio e ouvir o trovão: ");
    scanf("%f", &tempo);

    distancia = velocidade_som * tempo;

    printf("Distância = %.2f metros.\n", distancia);

}
