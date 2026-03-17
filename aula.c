#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Boa noite! Atenção! \n\n");
    printf("%c", 169);

    getchar();//AGUARDA O ENTER
}
