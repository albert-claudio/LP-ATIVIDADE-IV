#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Funcionario
{
    float salario;
    char nome[30];
    char cargo[30];
};

void cabecalho()
{
    printf("\n==============================================\n");
    printf("\t ODYSSEY INC.\n");
    printf("\n==============================================\n");
}

float calcularMediaSalarial(struct Funcionario *funcionarios, char *cargo, int numFuncionarios)
{
    float somaSalarios = 0;
    int contador = 0;

    for (int i = 0; i < numFuncionarios; i++)
    {
        if (strcmp(funcionarios[i].cargo, cargo) == 0)
        {
            somaSalarios += funcionarios[i].salario;
            contador++;
        }
    }

    if (contador > 0)
    {
        return somaSalarios / contador;
    }
    else
    {
        return 0;
    }
}

int main()
{
  setlocale(LC_ALL, "portuguese");
    struct Funcionario funcionarios[5];

    
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do funcionário %d: ", i + 1);
        scanf("%s", funcionarios[i].nome);

        printf("Digite o cargo do funcionário %d: ", i + 1);
        scanf("%s", funcionarios[i].cargo);

        printf("Digite o salário do funcionário %d: ", i + 1);
        scanf("%f", &funcionarios[i].salario);
    }

  
    cabecalho();

  
    char cargoProcurado[] = "programador";
    float mediaSalarial = calcularMediaSalarial(funcionarios, cargoProcurado, 5);

    if (mediaSalarial > 0)
    {
        printf("Média Salarial dos Programadores: %.2f\n", mediaSalarial);
    }
    else
    {
        printf("Não há programadores na empresa.\n");
    }

    return 0;
}
