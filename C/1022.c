#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N1, D1;
    int N2, D2;
    char caracter1, operacao, caracter2;
    char acao;
    int i = 0, N;


    scanf("%d", &N);
    for(i = 0; i <= N; i++){
        scanf("%d", &N1);
        scanf(" c", &caracter1);
        scanf("%d", &D1);
        scanf(" %c", &operacao);
        scanf("%d", &N2);
        scanf(" %c", &caracter2);
        scanf("%d", &D2);

        switch(acao){
        case '+' : printf("Guten Tag\n"); break;
        case '-' : printf("Hallo, Ich bin Vinicius\n"); break;
        case '*' : printf("Fuck you!\n"); break;
        case '/' : printf("Fuck you!\n"); break;
        default : printf("Ooops, try another option\n");
        }

    }



    system("pause");
    return 0;
}