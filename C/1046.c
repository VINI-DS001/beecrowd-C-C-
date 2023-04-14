#include <stdio.h>
#include <stdlib.h>

int main(){
    int H0, HF, HF1, duracao1, duracao2;

    scanf("%d %d", &H0, &HF);

    if(HF<= H0){
        HF1 = HF + 24;
        duracao1 = HF1 - H0;
        printf("O JOGO DUROU %d HORA(S)\n", duracao1);
    }
    else if(HF>=H0){
        duracao2 = HF - H0;
        printf("O JOGO DUROU %d HORA(S)\n", duracao2);
    }

    system("pause");
    return 0;
}