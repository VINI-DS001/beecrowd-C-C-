#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;

    printf("Digite um numero de 1 a 12\n");
    scanf("%d", &N);

    if(N == 1){
        printf("January\n");
    }
    else if(N == 2){
        printf("February\n");
    }
    if(N == 3){
        printf("March\n");
    }
    if(N == 4){
        printf("April\n");
    }
    if(N == 5){
        printf("May\n");
    }
    if(N == 6){
        printf("June\n");
    }
    if(N == 7){
        printf("July\n");
    }
    if(N == 8){
        printf("August\n");
    }
    if(N == 9){
        printf("September");
    }
    if(N == 10){
        printf("October");
    }
    if(N == 11){
        printf("November\n");
    }
    if(N == 12){
        printf("December\n");
    }

    return 0;
}