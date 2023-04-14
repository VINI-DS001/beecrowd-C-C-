#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct arv_binaria{
	char Chave;
	struct arv_binaria* esq; // Ponteiro da Esquerda
	struct arv_binaria* dir; //Ponteiro da Direita
}Arvore;

Arvore* pArvore = NULL;
bool flag;

void PRE(Arvore** pArvore){
	if((*pArvore) != NULL){

		if(flag) printf(" ");
		printf("%c", (*pArvore)->Chave);
		flag=true;

		PRE(&(*pArvore)->esq);
		PRE(&(*pArvore)->dir);
	}
}

void INF(Arvore** pArvore){

	if((*pArvore) != NULL){

		INF(&(*pArvore)->esq);

		if(flag) printf(" ");
		printf("%c", (*pArvore)->Chave);
		flag=true;

		INF(&(*pArvore)->dir);
	}
}

void POSF(Arvore** pArvore){

	if((*pArvore) != NULL){

		POSF(&(*pArvore)->esq);
		POSF(&(*pArvore)->dir);

		if(flag) printf(" ");
		printf("%c", ((*pArvore)->Chave));
		flag=true;
	}
}

void Insere(Arvore** pArvore, char iChave){

	if((*pArvore)==NULL){

		(*pArvore) = (Arvore*)malloc(sizeof(Arvore));

		if((*pArvore)){
			(*pArvore)->Chave = iChave;
			(*pArvore)->esq = NULL;
			(*pArvore)->dir = NULL;
		}
	}
	else{
		if(iChave < (*pArvore)->Chave)
			Insere(&(*pArvore)->esq, iChave);
		else
			Insere(&(*pArvore)->dir, iChave);
	}
}

void Busca(Arvore** pArvore, char iChave){

	if((*pArvore) == NULL){
		printf("%c nao existe\n", iChave);
		return;
	}
	else{
		if(iChave == (*pArvore)->Chave){
			printf("%c existe\n", iChave);
			return;
		}
		else{
			if(iChave < (*pArvore)->Chave){
				Busca(&(*pArvore)->esq, iChave);
				return;
			}
			else{
				Busca(&(*pArvore)->dir, iChave);
				return;
			}
		}
	}
}

int main(){
	int i, j;
	char comando[30], C;

	while(scanf("%s", comando) != EOF){

		getchar();
		if(comando[0]=='I' && comando[1]=='\0'){

			scanf("%c", &C);//Elemento a ser inserido
			Insere(&pArvore, C);
		}
		else if(comando[0]=='I' && comando[1]!='\0'){

			flag=false;
			INF(&pArvore);
			printf("\n");
		}
		else if(comando[0]=='P' && comando[1]=='\0'){

			scanf("%c", &C);//Elemento a ser procurado
			Busca(&pArvore, C);
		}
		else if(comando[0]=='P' && comando[1]=='R'){

			flag=false;
			PRE(&pArvore);
			printf("\n");
		}
		else{

			flag=false;
			POSF(&pArvore);
			printf("\n");
		}
	}

	return 0;
}