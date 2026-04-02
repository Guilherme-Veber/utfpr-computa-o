#include <stdio.h>
#include <math.h>

int main() {
    double raio_cilindro, altura, raio_esfera;
    double volume_cilindro, volume_esfera, quantidade_esferas;
    const double pi = 3.1415926;

    printf("Raio da base do cilindro: ");
    scanf("%lf", &raio_cilindro);

    printf("Altura do cilindro: ");
    scanf("%lf", &altura);

    printf("Raio das esferas: ");
    scanf("%lf", &raio_esfera);

    // Volume do cilindro
    volume_cilindro = pi * pow(raio_cilindro, 2) * altura;

    // Volume da esfera
    volume_esfera = (4.0 / 3.0) * pi * pow(raio_esfera, 3);

    // Considerando o vazio de 25% do volume da esfera
    quantidade_esferas = volume_cilindro / (volume_esfera * 1.25);

    printf("Esferas no cilindro: %.0f\n", quantidade_esferas);

}


