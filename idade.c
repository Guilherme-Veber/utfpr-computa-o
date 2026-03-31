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
    else if (idade <= 17)
    {
        printf("Adolescente\n\n");
    }
    else if (idade < 65)
    {
        printf("Adulto\n\n");
    }
    else
    {
        printf("Idoso\n\n");
    }


}
