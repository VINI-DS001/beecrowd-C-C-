#include <stdio.h>
#include <stdlib.h>

int main(){
    double D;

    scanf("%lf", &D);

    if(D >= 0 && D <= 25){
        printf("Intervalo [0,25]\n");
    }
    else if(D > 25 && D <= 50){
        printf("Intervalo (25,50]\n");
    }
    else if(D > 50 &&  D<= 75){
        printf("Intervalo (50,75]\n");
    }
    else if(D > 75 &&  D<= 100){
        printf("Intervalo (75,100]\n");
    }
    else if(D < 0 || D > 100){
        printf("Fora de intervalo\n");
    }

    return 0;
}