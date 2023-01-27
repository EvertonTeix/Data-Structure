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

Pessoa ler_pessoa(){

    Pessoa p;

     printf("\nDigite o nome e data de nascimento (dd mm aaaa): \n");
     scanf("%49[^\n]%d%d%d", p.nome, p.data.dia, p.data.mes, p.data.ano);

     return p;
}

void imprimir_pessoa(Pessoa p){

     printf("\nNome: %s \nData: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);

}
//função para a operação push (empilhar)

No* empilhar(No *topo){

    No *novo = malloc(sizeof(No));

    if(novo){

        novo->p = ler_pessoa();
        novo->proximo = topo;
        return novo;
    }
    else{
         printf("\nErro ao alocar memória\n");
    }

    return NULL;
}

int main()
{
    setlocale(0, "Portuguese");

    No *topo = NULL;
    int opcao;

    do{
        printf("\n________MENU________\n\n0 - SAIR\n1 - EMPILHAR\n2 - DESEMPILHAR\n3 - IMPRIMIR");
        printf("\n\nDigite a opcção desejada: ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){

        case 1:

            topo = empilhar(topo);
            break;

        case 2:

            break;

        case 3:

            break;

        default:
            if(opcao != 0){
                printf("\nOpção inválida");
            }
        }
    }while(opcao != 0);

    return 0;
}
