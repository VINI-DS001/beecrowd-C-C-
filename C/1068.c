#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    char c;
    struct elem *ligacao;
} Caracter;

typedef struct{
    Caracter *topo;
} Pilha;

void empilhando(Pilha *ptr, char c);
void desempilhando(Pilha *ptr);


int main() {
    char expressao[1001];

    int cont = 0;
    int ok = 1;
    int i;

    Pilha *ptr = malloc(sizeof(Pilha));
    ptr->topo = NULL;

    while(scanf(" %[^\n]s", expressao) != EOF) {

        for(i = 0; i < strlen(expressao); i++) {

            if(ptr->topo == NULL && expressao[i] == ')') {
                ok = 0;
                break;
            }

            if(expressao[i] == '(') {
               empilhando(ptr, expressao[i]);
            } else if(expressao[i] == ')') {
               desempilhando(ptr);
            }
        }

        if(ok && ptr->topo == NULL) {
            printf("correct\n");
        } else{
            printf("incorrect\n");
        }

        cont = 0;
        ok = 0;

    }

    return 1;
}

void empilhando(Pilha *ptr, char c) {

    Caracter *e = malloc(sizeof(Caracter));
    e->c = c;
    e->ligacao = ptr->topo;
    ptr->topo = e;

    return 0;
}

void desempilhando(Pilha *ptr) {

    Caracter *e = ptr->topo;
    ptr->topo = ptr->topo->ligacao;

    free(e);

}