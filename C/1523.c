#include <stdio.h>
#include <stdlib.h>

struct Carro{
    int CI[100001];
    int SI[100001];
};

typedef struct{
    int TOPO;
    struct Carro Carros[1001];
}Pilha;

Pilha* Criarpilha(){
    Pilha *P = (Pilha*)malloc(sizeof(Pilha));
    P->TOPO = 0;
    return P;
}

int Vazia(Pilha* P){
    return (P -> TOPO == 0);
}

int Cheia(Pilha* P){
    return (P -> TOPO == 1001-1);
}

int empilhar(Pilha* P, struct Carro X){
    if(!Cheia(P)){
        P -> Carros[P->TOPO] = X;
        P -> TOPO++;
        return 1;
    }
}

int desempilhar(Pilha *P, struct Carro X){
    if(!Vazia(P)){
        X = P->Carros[P->TOPO];
        P -> TOPO--;
        return 1;
    }
}

int tamanho(Pilha* P){
    if(P == NULL)
        return 0;
    else
        return P -> TOPO;
}

int main(){
    Pilha *P;
    struct Carro X, Y;
    int N, i, K, Z;
    int time = -1;

    P = Criarpilha();

    scanf("%d %d",&N, &K);

    while(N != 0 && K != 0){
        for(i=0; N > i; i++){
            scanf("%d %d", &X.CI, &X.SI);
            time = X.CI;
            if(time>Z){
                desempilhar(P,Y);
            }
            empilhar(P, X);
            if((tamanho(P)+1)>K){
                printf("Nao\n");
                break;
            }
            Z = X.SI;
            if((i+1)== N){
                printf("Sim\n");
            }
        }

    }
    system("pause");
    return 0;
}