#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, s, b, a, s1, b1, a1;
    double TentativSaq = 0, TotalsaqueJog = 0, TentativBloq = 0, TotalbloqJog = 0, TentativAtaques = 0, TotalataqJog = 0;
    double saques = 0, bloqueios = 0, ataques = 0;
    char nome[100];

    scanf("%d", &n);

    while(n--){
    scanf("%s", nome);
    scanf("%d %d %d", &s, &b, &a);
    scanf("%d %d %d", &s1, &b1, &a1);

    TentativSaq += s;
    TotalsaqueJog += s1;
    TentativBloq += b;
    TotalbloqJog += b1;
    TentativAtaques += a;
    TotalataqJog += a1;
    }

    saques = (double)TotalsaqueJog * 100/TentativSaq;
    bloqueios = (double)TotalbloqJog * 100/TentativBloq;
    ataques = (double)TotalataqJog * 100/TentativAtaques;

    printf("Pontos de Saque: %.2lf %%.\n", saques);
    printf("Pontos de Bloqueio: %.2lf %%.\n", bloqueios);
    printf("Pontos de Ataque: %.2lf %%.\n", ataques);

    system("pause");

    return 0;
}