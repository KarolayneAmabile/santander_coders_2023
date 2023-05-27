#include <stdio.h>

int main(void)
{
    printf("--- Moisés, bem_vindo ao App Ada Poupança ---\n");

    int i;
    float valor, saldo, poupança;

    saldo = 1000;
    poupança = 500;
    i = 0;

    while (i != 3)
    {
        printf("Digite 1 para APLICAR, 2 para RESGATAR e 3 para SAIR\n");
        scanf("%i", &i);

        if (i == 1)
        {
            printf("Valor da aplicação: \n");
            scanf("%f", &valor);

            if (valor > saldo)
            {
                printf("Saldo de conta corrente insuficiente\n");
                return 1;
            }
            else
            {
                saldo -= valor;
                poupança += valor;
                printf("Aplicação realizada com sucesso\n");
            }
        }
        else if (i == 2)
        {
            printf("Valor do resgate: \n");
            scanf("%f", &valor);

            if (valor > poupança)
            {
                printf("Saldo de poupança insuficiente\n");
                return 1;
            }
            else
            {
                saldo += valor;
                poupança -= valor;
                printf("Resgate realizado com sucesso\n");
            }
        }
        else
        {
            printf("Até logo!\n");
            return 0;
        }
    }
    return 0;
}