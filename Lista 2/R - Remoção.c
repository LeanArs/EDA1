#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int remove_depois(celula *p) {
    if (p == NULL || p->prox == NULL) {
        return 0;
    }
    celula *lixo = p->prox;
    p->prox = lixo->prox;
    free(lixo);
    return 1;
}

void remove_elemento (celula *le, int x){
    for (celula *prev = le, *aux = le->prox; aux != NULL; prev = aux, aux = aux->prox){
        if (aux->dado == x){
            prev->prox; aux->prox;
            free(aux);
            return;
        }
    }
}

void remove_todos_elementos (celula *le, int x){
    celula *prev = le, *aux = le->prox;
    while (aux != NULL) {
        if (aux->dado == x) {
            prev->prox = aux->prox;
            free(aux);
            aux = prev->prox;
        }
        else {
            prev = aux;
            aux = aux->prox;
        }
    }
}