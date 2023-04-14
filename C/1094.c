#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, c = 0, r = 0,  s = 0, SOMA = 0, QUANT;
    char type;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &QUANT);
        scanf(" %c", &type);

        SOMA += QUANT;

    if(type == 'C'){
        c += QUANT;

     } else if (type == 'R'){
        r += QUANT;

     } else if (type == 'S'){
        s += QUANT;
     }
    }

    printf("Total: %d cobaias\n", SOMA);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", (double)c * 100 / SOMA);
    printf("Percentual de ratos: %.2f %%\n", (double)r * 100 / SOMA);
    printf("Percentual de sapos: %.2f %%\n", (double)s * 100 / SOMA);

    system("pause");

    return 0;
}