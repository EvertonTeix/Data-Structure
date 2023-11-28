#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct fila{
    Senha *vetor[TAM];
    int qtdDeItens;
    int inicio;
};

struct senha{
    char tipo;
    int numero;
};

Senha* gerarSenhaNormal(int num){

    Senha *senha = (Senha*)malloc(sizeof(Senha));

    if (senha == NULL) {
        printf("Memoria Insuficiente.\n");
        exit(1);
    }

    senha->tipo = 'N';
    senha->numero = num;

    return senha;
}

Senha* gerarSenhaPrioritaria(int num){
    Senha *senha = (Senha*)malloc(sizeof(Senha));

    if (senha == NULL) {
        printf("Memoria Insuficiente.\n");
        exit(1);
    }

    senha->tipo = 'P';
    senha->numero = num;

    return senha;
}

static int incremento(int i){
    if(i==TAM-1){
        return 0;
    }else{
        return i+1;
    }
}

Fila* criaFila(){
    Fila *f = (Fila*)malloc(sizeof(Fila));
    f->qtdDeItens = 0;
    f->inicio = 0;
    return f;
}

int filaVazia(Fila *f){
    return (f->qtdDeItens==0);
}


void insere(Fila *f, Senha *senha) {

    int fim;

    if (f->qtdDeItens == TAM) {
        printf("Fila cheia!\n");
    }

    fim = (f->inicio + f->qtdDeItens) % TAM;
    f->vetor[fim] = senha;
    f->qtdDeItens++;
}

Senha* remova(Fila *f) {

    Senha *senha;

    if (filaVazia(f)) {
        printf("Fila vazia!\n");
    }
    senha = f->vetor[f->inicio];
    f->inicio = incremento(f->inicio);
    f->qtdDeItens--;

    return senha;
}

void imprimeFila(Fila *f) {

    for (int i = 0; i < f->qtdDeItens; i++) {
        printf("%c%d ", f->vetor[(f->inicio + i) % TAM]->tipo, f->vetor[(f->inicio + i) % TAM]->numero);
    }

    printf("\n");
}

void imprimeSenha(Senha *senha){
    printf("%c%d\n", senha->tipo, senha->numero);
}

void liberaFila(Fila *f){
    free(f);
}

int tamanhoFila(Fila *f) {
    return f->qtdDeItens;
}
