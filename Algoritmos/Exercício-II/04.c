#include <stdio.h>

int main(void)
{
    char nome[15], dia[2], mes[10];

    printf("Bem-vindo(a) ao App da Ada\n");
    printf("Digite o seu nome: ");
    scanf("%c", nome);
    printf("\n");

    printf("Digite o dia que você nasceu: ");
    scanf("%c", dia);

    printf("Digite o mês que você nasceu: ");
    scanf("%c", mes);
    printf("\n");

    printf("Login: ");
    for (int i = 0; i < 2; i++)
    {
        printf("%c", dia[i]);
    }
        for (int i = 0; i < 15; i++)
    {
        printf("%c", nome[i]);
    }
        for (int i = 0; i < 10; i++)
    {
        printf("%c", mes[i]);
    }
    printf("\n");
}