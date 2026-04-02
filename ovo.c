#include <stdio.h>

int main() {
    int total_ovos, caixas, sobra;

    printf("Informe o total de ovos recolhidos: ");
    scanf("%d", &total_ovos);

    caixas = total_ovos / 12;   // número de caixas completas
    sobra  = total_ovos % 12;   // ovos que não completam uma caixa

    printf("Foram feitas %d caixas e sobraram %d ovos", sobra, caixas);



}
