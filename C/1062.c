#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

typedef struct{
    int quant[MAX];
    int topo;
}Pilha;

void cria_Pilha(Pilha *pi);
void finaliza_Pilha(Pilha *pi);
int Pilha_vazia(Pilha pi);
int Pilha_cheia(Pilha pi);
float TOPO(Pilha pi);
void insere_Pilha(Pilha *pi, int valor);
void remove_Pilha(Pilha *pi);

int main(){
    int num_de_vagoes, n, topoA, topoestacao;
    int i = 0, maior = 0;
    Pilha A, estacao, B;
    Pilha *pi;

    while(1){
        scanf("%d", &num_de_vagoes);

        if(num_de_vagoes == 0){
            break;
        }

        while(1){
            cria_Pilha(&A);
            cria_Pilha(&estacao);
            cria_Pilha(&B);

            scanf("%d", &n);

            if(n == 0){
                break;
            }else{
                insere_Pilha(&A, n);

                if(n > maior)
                    maior = n;
            }
            for(i=0; i < num_de_vagoes-1; i++){
                scanf("%d", &n);
                insere_Pilha(&A, n);
                if(n > maior)
                    maior = n;
            }

            while(Pilha_vazia(A) == NULL || (TOPO(estacao) == maior)){

                if(Pilha_vazia(A)){
                    topoA = 0;
                }else{
                    topoA = TOPO(A);
                }

                if(Pilha_vazia(estacao)){
                    topoestacao = 0;
                }else{
                    topoestacao = TOPO(estacao);
                }

                if(topoA == maior){
                    insere_Pilha(&B, topoA);
                    remove_Pilha(&A);
                    maior--;

                }else if(topoestacao == maior ){
                    insere_Pilha(&B, topoestacao);
                    remove_Pilha(&estacao);
                    maior--;

                }else{
                    insere_Pilha(&estacao, topoA);
                    remove_Pilha(&A);
                }
            }

            if(Pilha_vazia(A) == 1 && Pilha_vazia(estacao) == 1){
                printf("Yes\n");
            }else{
                printf("No\n");
            }

            finaliza_Pilha(&A);
            finaliza_Pilha(&estacao);
            finaliza_Pilha(&B);
        }
    }
    return 0;
}

void cria_Pilha(Pilha *pi){
    (*pi).topo = -1;
}

void finaliza_Pilha(Pilha *pi){
    (*pi).topo = -1;
}

int Pilha_vazia(Pilha pi){
    return pi.topo == -1;
}

int Pilha_cheia(Pilha pi){
    return pi.topo == MAX - 1;
}

float TOPO(Pilha pi){
    return pi.quant[pi.topo];
}

void insere_Pilha(Pilha *pi, int valor){
    if(Pilha_cheia(*pi)){
    }

    else{
        (*pi).topo++;
        (*pi).quant[(*pi).topo] = valor;
    }
}

void remove_Pilha(Pilha *pi){
    if(Pilha_vazia(*pi)){
    }

    else{
        (*pi).topo--;
    }
}