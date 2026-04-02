#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int maiorAB, maiorABC;

    printf("Digite três valores inteiros separados por espaço: ");
    scanf("%d %d %d", &a, &b, &c);

    // Calcula o maior entre a e b
    maiorAB = (a + b + abs(a - b)) / 2;

    // Calcula o maior entre maiorAB e c
    maiorABC = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("%d maior\n", maiorABC);


}
