#include <stdio.h>
#include <stdlib.h>

typedef struct Lista{
 int info;
 struct Lista *next;
}LISTA;

typedef struct fila{
 LISTA *topo;
 LISTA *end;
}Fila;

Fila *ativar(){
 Fila *primeiro = (Fila*)malloc(sizeof(Fila));
 primeiro->end = NULL;
 primeiro->topo = NULL;
 return primeiro;
}

void *push(Fila *p, int Carta){
 LISTA *novo = (LISTA*)malloc(sizeof(LISTA));
 novo->info = Carta;
 novo->next = NULL;
 if(p->topo==NULL){
  p->topo = novo;
  p->end = novo;
 }else{
  p->end->next = novo;
  p->end = novo;
 }

}

int pop(Fila *p){
 int carta;
 LISTA *l;

 l = p->topo;
 carta = l->info;

 p->topo = l->next;
 if(p->topo==NULL)
  p->end = NULL;

 free(l);

 return carta;
}

int vazio(Fila *p){
 return p->topo==NULL;
}

int main(){

 int n, i, carta, cont = 0;
 Fila *fila;

 fila = ativar();

 do{
  scanf("%d", &n);
  if(n){
   cont = n;
   for(i=1;i<=n;i++){
    push(fila, i);
   }
   printf("Discarded cards:");
   while(cont!=1){
    printf(" %d", pop(fila));
    push(fila, pop(fila));

    if(cont!=2)
     printf(",");
    cont--;
   }

   if(!vazio(fila))
    printf("\nRemaining card: %d\n", pop(fila));
  }
  
 }while(n!=0);

 return 0;
}