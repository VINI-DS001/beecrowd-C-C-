#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome1[20],nome2[20],nome3[20];

    printf("O animal eh vertebrado ou invertebrado? \n");
    gets(nome1);
    printf("O animal eh uma ave, mamifero, inseto ou anelideo? \n");
    gets(nome2);
    printf("O animal eh carnivoro, herbivoro, onivoro ou hematofago? \n");
    gets(nome3);

    if(nome1 == "vertebrado" && nome2 == "ave" && nome3 == "carnivoro"){
        printf("aguia");
    }

    system("pause");

    return 0;
}