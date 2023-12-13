#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct lista_funcionarios
{
    float salario;
    char nome[30];
    char cargo[30];
};

void cabecalho(){
    printf("\n==============================================\n");
    printf("\t ODYSSEY INC.\n");
    printf("\n==============================================\n");
}

void CargosDeFuncionario(struct lista_funcionarios *funcionario, char *nome){
    int i;

    for ( i = 0; i < 5; i++)
    {
        /* code 
    }
    

}