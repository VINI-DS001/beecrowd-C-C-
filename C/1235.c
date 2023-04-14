#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,i,j,taman,part,k;
    char texto[100], textoaocontrario[100];

    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++){
        gets(texto);
        taman = strlen(texto);
        part = taman/2;
        k = 0;
        for(j = part - 1; j >=0; j--){
            textoaocontrario[k] = texto[j];
            k++;
        }
        k = part;
        for(j = taman - 1; j >=part; j--){
            textoaocontrario[k] = texto[j];
            k++;
        }
        textoaocontrario[taman]= '\0';
        puts(textoaocontrario);
    }

    system("pause");

    return 0;
}