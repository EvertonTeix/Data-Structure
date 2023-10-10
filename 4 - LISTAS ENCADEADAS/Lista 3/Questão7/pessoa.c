#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pessoa.h"

struct pessoa{
    int idade;
    char nome[50];
    Pessoa *proximo;
};

Pessoa* criarLista(){
    return NULL;
}

Pessoa* inserirContato(Pessoa *p, int i, char nome[]){

    Pessoa *novo = (Pessoa*)malloc(sizeof(Pessoa));

    if(novo == NULL){
        printf("Memoria Insuficiente.");
        exit(1);
    }

    novo->idade = i;
    strcpy(novo->nome, nome);
    novo->proximo = p;

    return novo;
}

Pessoa* removerContato(Pessoa *p, char nome[]){
    Pessoa *anterior = NULL;
    Pessoa *l = p;

    while(l != NULL && strcmp(l->nome, nome) != 0){
        anterior = l;
        l = l->proximo;
    }

    //verifica se não achou o elemento
    if(l == NULL)
        return p; //retorna a lista original

    //se encontrou remove o elemento
    if(anterior == NULL){
        //o elemento a ser removido está no início
        p = l->proximo;
    }
    else{
        //remove o elemento do meio da lista
        anterior->proximo = l->proximo;
    }

    free(l);

    return p;
}

void mostrarLista(Pessoa *p){

    Pessoa *l;

    for(l = p; l != NULL; l = l->proximo){
        printf("Nome: %s\nIdade: %d\n", l->nome, l->idade);
    }
}

void buscarMostrarContato(Pessoa *p, char nome[]){
    Pessoa *l = p;

    while(l != NULL){
        if(strcmp(l->nome, nome) == 0){
            printf("Nome: %s\nIdade: %d\n", l->nome, l->idade);
        }

        l = l->proximo;
    }
}

void liberarLista(Pessoa *p) {
    Pessoa *atual = p;
    Pessoa *proximo;

    while (atual != NULL) {
        proximo = atual->proximo; // Salva o próximo nó antes de liberar o atual
        free(atual); // Libera o nó atual
        atual = proximo; // Move para o próximo nó
    }
}

