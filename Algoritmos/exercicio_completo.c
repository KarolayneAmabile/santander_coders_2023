#include <stdio.h>
#include <stdbool.h>

char mostrar_menu(void);

int main(void)
{
    char opcao_selecionada;
    int valor = 0;
    int saldo = 100;
    bool encerrar_programa = false;

    opcao_selecionada = mostrar_menu();

    while (encerrar_programa == false)
    {
        if (opcao_selecionada == 'a')
        {
            printf("Seu saldo é: %i\n", saldo);
            return 0;
        }
        else if (opcao_selecionada == 'b')
        {
            printf("Digite o valor a depositar: \n");
            scanf("%d", &valor);
            saldo += valor;
            printf("Deposito efetuado\n");
            return 0;
        }
        else if (opcao_selecionada == 'c')
        {
            printf("Digite o valor a retirar: ");
            scanf("%d", &valor);
            if (valor > saldo)
            {
                printf("Saque não permitido, saldo insuficiente.\n");
            }
            else
            {
               saldo -= valor;
               printf("Saque efetuado\n");
            }
            return 0;

        }
        else if (opcao_selecionada == 'd')
        {
            encerrar_programa = true;
        }
        else
        {
            printf("Opção inválida, tente novamente.");
        }
    }

}

char mostrar_menu(void)
{
    char opcao_selecionada;

    printf("Menu de operação\n");
    printf("[a] Mostrar saldo\n");
    printf("[b] Efetuar deposito\n");
    printf("[c] Efetuar saque\n");
    printf("[d] Finalizar\n");

    printf("Digite a operação a ser realiada: ");
    scanf("%c", &opcao_selecionada);

    return opcao_selecionada;
}