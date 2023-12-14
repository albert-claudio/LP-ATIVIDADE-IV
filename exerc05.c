
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


struct ContaBancaria
{
    int numeroConta;
    char nomeTitular[50];
    float saldo;
    char tipoConta[20]; 
};


void depositar(struct ContaBancaria *conta, float valor)
{
    conta->saldo += valor;
    printf("Depósito realizado com sucesso! Novo saldo: %.2f\n", conta->saldo);
}


void sacar(struct ContaBancaria *conta, float valor)
{
    if (valor <= conta->saldo)
    {
        conta->saldo -= valor;
        printf("Saque realizado com sucesso! Novo saldo: %.2f\n", conta->saldo);
    }
    else
    {
        printf("Saldo insuficiente para realizar o saque.\n");
    }
}


void imprimirSaldo(struct ContaBancaria conta)
{
    printf("Saldo atual: %.2f\n", conta.saldo);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    
    struct ContaBancaria minhaConta = {123456, "João Silva", 1000.0, "corrente"};

    int escolha;
    float valor;

    do
    {
        
        printf("\nMenu de Operações:\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Imprimir Saldo\n");
        printf("0. Sair\n");

        printf("Escolha a operação desejada: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("Digite o valor para depósito: ");
            scanf("%f", &valor);
            depositar(&minhaConta, valor);
            break;

        case 2:
            printf("Digite o valor para saque: ");
            scanf("%f", &valor);
            sacar(&minhaConta, valor);
            break;

        case 3:
            imprimirSaldo(minhaConta);
            break;

        case 0:
            printf("Saindo do programa. Até mais!\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (escolha != 0);

    return 0;
}
