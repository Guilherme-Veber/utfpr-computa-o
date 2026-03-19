#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float base, altura, area;

    printf("base = ");
    scanf("%f", &base);
    printf("altura = ");
    scanf("%f", &altura);
    printf("area = %.2f \n\n", area);
    area = base * altura * 0*5;








    float dinheiro = 6;
    int poltrona = 15;
    char letra = 'A';

    printf(" valor da passagem = %.2f" , dinheiro);
    printf("\n\n"); //quebra de linhas
    printf(" poltrona = %.03d \n\n", poltrona);
    printf("letra = %c \n\n", letra);
}
