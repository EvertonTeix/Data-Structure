#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct data{

    int dia, mes, ano;
};

typedef struct data Data;

struct pessoa{

    char nome[50];
    Data data;
};

typedef struct pessoa Pessoa;

struct no{

    Pessoa p;
    struct no *proximo;
};

typedef struct no No;

struct pilha{

    No *topo;
    int tam;
};

typedef struct pilha Pilha;

void criar_pilha(Pilha *p){

    p->topo = NULL;
    p->tam = 0;
}

Pessoa ler_pessoa(){

    Pessoa p;

     printf("\nDigite o nome e data de nascimento (dd mm aaaa): \n");
     scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);

     return p;
}

void imprimir_pessoa(Pessoa p){

     printf("\nNome: %s \nData: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);

}
//função para a operação push (empilhar)

void empilhar(Pilha *p){

    No *novo = malloc(sizeof(No));

    if(novo){

        novo->p = ler_pessoa();
        novo->proximo = p->topo;
        p->topo = novo;
        p->tam++;


    }
    else{
         printf("\nErro ao alocar memória\n");
    }


}

No* desempilhar(Pilha *p){

    if(p->topo){

        No *remover = p->topo;
        p->topo = remover->proximo;
        p->tam--;
        return remover;

    }else{
        printf("\nPilha vazia!\n");
    }

    return NULL;
}

void imprimir_pilha(Pilha *p){

    No *aux = p->topo;

    printf("\n--------------- PILHA Tam: %d----------------\n", p->tam);
    while(aux){
        imprimir_pessoa(aux->p);
        aux = aux->proximo;
    }
    printf("\n------------- FIM PILHA --------------\n");

}

int main()
{
    setlocale(0, "Portuguese");

    No *remover;
    Pilha p;

    criar_pilha(&p);

    int opcao;

    do{
        printf("\n________MENU________\n\n0 - SAIR\n1 - EMPILHAR\n2 - DESEMPILHAR\n3 - IMPRIMIR");
        printf("\n\nDigite a opcção desejada: ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){

        case 1:

            empilhar(&p);
            break;

        case 2:

            remover = desempilhar(&p);
            if(remover){

                printf("\nElemento removido com sucesso!\n");
                imprimir_pessoa(remover->p);

                free(remover);

            }else{

                printf("\nSem nó a remover.\n");
            }
            break;

        case 3:

            imprimir_pilha(&p);
            break;

        default:
            if(opcao != 0){
                printf("\nOpção inválida");
            }
        }
    }while(opcao != 0);

    return 0;
}
