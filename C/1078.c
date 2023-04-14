#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, cont;

    printf("Digite um valor maior que 2 e menor que 1000\n");
    scanf("%d", &N);

    for(cont = 1; cont <= 10; cont++){
        printf("%d x %d = %d\n", cont, N, cont * N);
    }
    system("pause");
    return 0;
}