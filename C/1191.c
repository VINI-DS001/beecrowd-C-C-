#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no_Arvore{
	char letra;
	struct no_Arvore *dir;
	struct no_Arvore *esq;
}no_Arvore;

no_Arvore* novo_No(char letra);

void posfixa(no_Arvore *arvore);

int src(char *string, int inic, int fim, char letra);

no_Arvore* arv_bin(char *infixa, char *prefixa, int Inicio, int Fim);

short ind;

int main(){
	char prefixa[26], infixa[26];

	while (scanf("%s %s", prefixa, infixa) != EOF){
		int tam = strlen(prefixa);
		ind = 0;
		no_Arvore *raiz = arv_bin(infixa, prefixa, 0, tam - 1);
		posfixa(raiz);
		printf("\n");
	}
}

no_Arvore* novo_No(char letra){
	no_Arvore *no = (no_Arvore *) malloc(sizeof(no_Arvore));
	no->letra = letra;
	no->esq = no->dir = NULL;
	return no;
}

int src(char *string, int inic, int fim, char letra){
	short i;
	for (i = inic; i <= fim; ++i)
		if (string[i] == letra)
			return i;

	return -1;
}

no_Arvore* arv_bin(char *infixa, char *prefixa, int Inicio, int Fim){
	int infixaIndice;

	if (Inicio > Fim)
		return NULL;

	no_Arvore *no = novo_No(prefixa[ind++]);
	if (Inicio == Fim)
		return no;

	infixaIndice = src(infixa, Inicio, Fim, no->letra);
	no->esq = arv_bin(infixa, prefixa, Inicio, infixaIndice - 1);
	no->dir = arv_bin(infixa, prefixa, infixaIndice + 1, Fim);

	return no;
}

void posfixa(no_Arvore *no){
	if (no == NULL)
		return;

	posfixa(no->esq);
	posfixa(no->dir);
	printf("%c", no->letra);
}