#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[101];
    int poder;
    int qtd_matou;
    int qtd_morreu;
} Heroi;

typedef struct no
{
    Heroi dados;
    struct no *prox;
} NO;

typedef NO *Lista_e;

Lista_e *criar_lista_e()
{
    Lista_e *le = (Lista_e *)malloc(sizeof(Lista_e));
    if (le != NULL)
    {
        *le = NULL;
    }
    return le;
}

void ordenarDecrescente(Lista_e *le, Heroi d)
{
    if (le == NULL)
        return;
    NO *novo_no = (NO *)malloc(sizeof(NO));
    if (novo_no == NULL)
        return;
    novo_no->dados = d;
    novo_no->prox = NULL;
    if ((*le) == NULL || (*le)->dados.poder < novo_no->dados.poder)
    {
        novo_no->prox = *le;
        *le = novo_no;
    }
    else
    {
        NO *aux = *le;
        while (aux->prox != NULL && aux->prox->dados.poder > novo_no->dados.poder)
        {
            aux = aux->prox;
        }
        novo_no->prox = aux->prox;
        aux->prox = novo_no;
    }
}

void swap(NO *dado1, NO *dado2)
{
    Heroi aux = dado1->dados;
    dado1->dados = dado2->dados;
    dado2->dados = aux;
}

void ordenar(Lista_e *le)
{
    NO *aux = *le;
    int inc = 0;
    while (aux->prox != NULL)
    {
        if (aux->dados.poder == aux->prox->dados.poder)
        {
            if (aux->dados.qtd_matou > aux->prox->dados.qtd_matou)
            {
                swap(aux, aux->prox);
                inc++;
            }
            else if (aux->dados.qtd_matou == aux->prox->dados.qtd_matou)
            {
                if (aux->dados.qtd_morreu > aux->prox->dados.qtd_morreu)
                {
                    swap(aux, aux->prox);
                    inc++;
                }
                else if (aux->dados.qtd_morreu == aux->prox->dados.qtd_morreu)
                {
                    if (strcmp(aux->dados.nome, aux->prox->dados.nome) > 0)
                    {
                        swap(aux, aux->prox);
                        inc++;
                    }
                }
            }
        }
        aux = aux->prox;
    }
    if (inc != 0)
        ordenar(le);
}