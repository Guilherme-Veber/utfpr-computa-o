#include<stdio.h>

int main()
{
    float medida, resultado;
    char unidade;

    printf("\n\n");
    printf(" medida =");
    scanf("%f", &medida);

    getchar();

    printf( "converter para (p)olegadas ou em (c)m?");
    scanf("%c", &unidade);

    if(medida == 'p'|| medida == 'P')
    {
      resultado = medida /2.54;
      printf(" resultado =%.2f polegadas \n\n", resultado);
    }
    else
    {
        resultado = medida *2.54;
        printf(" resultado =%.2f cm \n\n", resultado);
    }

}
