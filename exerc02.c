#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


struct dados_aluno
{
    char nome[200];
    float notas[3];
    float media;
};

void calcularMedia(struct dados_aluno *alunos){
    int i,j;
    float somaNotas = 0;

    for ( i = 0; i < TAM; i++)
    {
        for (j = 0; j < notas; j++)
        {
            somaNotas += alunos[i].notas[j];
        }
        alunos[i].media = somaNotas / NOTAS;
        somaNotas = 0;
}
 //CALCULANDO A NOTA
 alunos[i] = calcularMedia(alunos);

 //MOSTRANDO A NOTA
 for (i = 0; i < TAM; i++)
 {
    printf("\nNome: %s \n", aluno[i].nome);
    printf("\nSoma: %s \n", aluno[i].soma);
    printf("\nMedia: %s \n", aluno[i].media);
 }
 }

 int main(){


    return 0;
 }