#include <stdio.h>

int main()
{
    int idade;

    printf("\n\n");
    printf("Idade (anos) = ");
    scanf("%d", &idade);

    printf("\n\n");

    if (idade <= 12)
    {
        printf("Crianca!\n\n");
    }
    if (idade >12 &&idade <= 17)
    {
        printf("Adolescente\n\n");
    }
    if (idade >17  &&idade < 65)
    {
        printf("Adulto\n\n");
    }
    if (idade >= 65)
    {
        printf("Idoso\n\n");
    }


}
