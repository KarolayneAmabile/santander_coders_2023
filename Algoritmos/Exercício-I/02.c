#include <stdio.h>
#include <string.h>


int main(void)
{
    char senha[10];
    int i = 0;

    printf("Para continuar, digite sua senha: ");
    scanf("%s", senha);

    while (strcmp(senha, "a6b5c4") != 0)
    {
        printf("Senha inválida.\n");
        i++;

        printf("Para continuar, digite sua senha: ");
        scanf("%s", senha);
    }

    printf("Seja bem-vindo(a) à àrea do cliente.\n");
    // para vizualizar a quantidade de vezes que tentamos usar a senha, adiciona printf("%i", i);
    return 0;
}