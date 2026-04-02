#include <stdio.h>

int main() {
    int horaEntrada, minutoEntrada;
    int horaSaida, minutoSaida;
    int minutosEntrada, minutosSaida, tempoTotal;
    int horas, minutos;

    printf("Informe a hora de entrada (HH:MM): ");
    scanf("%d:%d", &horaEntrada, &minutoEntrada);

    printf("Informe a hora de saída (HH:MM): ");
    scanf("%d:%d", &horaSaida, &minutoSaida);

    // Converter tudo para minutos
    minutosEntrada = horaEntrada * 60 + minutoEntrada;
    minutosSaida   = horaSaida * 60 + minutoSaida;

    // Caso a saída seja no dia seguinte
    if (minutosSaida < minutosEntrada) {
        minutosSaida += 24 * 60;
    }

    tempoTotal = minutosSaida - minutosEntrada;

    horas   = tempoTotal / 60;
    minutos = tempoTotal % 60;

    printf("Permanência: %02d:%02d\n", horas, minutos);


}
