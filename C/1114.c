#include<stdio.h>

int main(){

int i, password;

    scanf("%d", &password);
    for(i=0; password!=2002; i++){
        if(password!=2002){
            printf("Senha Invalida\n");
            scanf("%d", &password);
        }
    }
    printf("Acesso Permitido\n");
}