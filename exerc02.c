#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

struct Aluno
{
    char nome[200];
    char data_nascimento[20];
    float notas[2];
    float media;
};

float calcularMedia(struct Aluno aluno)
{
    return (aluno.notas[0] + aluno.notas[1]) / 2.0;
}

void verificarAprovacao(struct Aluno aluno)
{
    if (aluno.media >= 7.0)
    {
        printf("%s está aprovado!\n", aluno.nome);
    }
    else
    {
        printf("%s está reprovado.\n", aluno.nome);
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    struct Aluno alunos[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite a data de nascimento do aluno %d: ", i + 1);
        scanf("%s", alunos[i].data_nascimento);

        printf("Digite a nota 1 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].notas[0]);

        printf("Digite a nota 2 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].notas[1]);

        
        alunos[i].media = calcularMedia(alunos[i]);
    }

    
    for (int i = 0; i < 5; i++)
    {
        printf("\nAluno: %s\n", alunos[i].nome);
        printf("Média: %.2f\n", alunos[i].media);
        verificarAprovacao(alunos[i]);
    }

    return 0;
}
