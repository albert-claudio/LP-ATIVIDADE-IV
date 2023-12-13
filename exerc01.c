#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_CONTATOS 3


struct lista_contatos {
    char nome[300];
    int numero;
    char email[300];
};


void adicionarContato(struct lista_contatos contato, struct lista_contatos lista[], int *indice) {
    if (*indice < MAX_CONTATOS) {
        lista[*indice] = contato;
        (*indice)++;
        printf("%s foi adicionado à lista de contatos.\n", contato.nome);
    } else {
        printf("A lista de contatos está cheia. Não é possível adicionar mais contatos.\n");
    }
}


void PessoasDoContato(char nome[], struct lista_contatos lista[], int indice) {
    int encontrado = 0;

    for (int i = 0; i < indice; i++) {
        if (strcmp(nome, lista[i].nome) == 0) {
            printf("Número: %d\nEmail: %s\n", lista[i].numero, lista[i].email);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }
}

int main() {
    struct lista_contatos contatos[MAX_CONTATOS]; 
    int indiceContatos = 0;  
    int i;


    struct lista_contatos novoContato;
    
    for ( i = 0; i < 3; i++)
    { 
    printf("Digite o nome do contato: ");
    scanf("%s", novoContato.nome);

    printf("Digite o número do contato: ");
    scanf("%d", &novoContato.numero);

    printf("Digite o email do contato: ");
    scanf("%s", novoContato.email);
    }
    

    
    adicionarContato(novoContato, contatos, &indiceContatos);

 
    char nomeBusca[300];
    printf("Digite o nome do contato para obter informações: ");
    scanf("%s", nomeBusca);

    PessoasDoContato(nomeBusca, contatos, indiceContatos);

    return 0;
}
