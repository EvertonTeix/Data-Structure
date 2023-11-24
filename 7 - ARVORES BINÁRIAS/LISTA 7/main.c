#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvore.h"

int main(){

    Arv *a =  cria("Atendimento virtual?", 
                            cria("Perdeu cartao?",
                                cria("Seu cartão foi suspenso.", NULL, NULL),
                                cria("Consultar valor da fatura?",
                                    cria("Sua fatura é RS.", NULL, NULL),
                                    cria("Emitir 2a via?",
                                        cria("Um e-mail sera enviado.", NULL, NULL),
                                        cria("Compra suspeita?",
                                            cria("Repassando para um atendente.", NULL, NULL),
                                            cria("Outras informacoes.", NULL, NULL))))),
                        cria("Passarei a um atendente.", NULL, NULL));


    atendimento(a);

    return 0;
}