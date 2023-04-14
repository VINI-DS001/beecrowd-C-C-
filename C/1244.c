#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

typedef struct{
    char palavra[60];
    int tamaNHO;
    int posicao;
}Palavra;

int compare(const void * y, const void * z){
    Palavra *A = (Palavra*)y;
    Palavra *B = (Palavra*)z;
    if (A->tamaNHO == B->tamaNHO)
        return (A->posicao - B->posicao);
    return (B->tamaNHO - A->tamaNHO);
}

int main(){
    int N, i, T;
    Palavra caso[60];
    char temp[3000], *temp2;

    scanf("%d", &N);

    while (N > 0){
        T = 0;
        fflush(stdin);
        scanf(" %[^\n]s",&temp);
        temp2 = strtok(temp," ");
        while(temp2 != NULL){

            strcpy(caso[T].palavra,temp2);
            caso[T].tamaNHO = strlen(caso[T].palavra);
            temp2 = (char*) strtok(NULL, " ");
            caso[T].posicao = T;
            T++;
        }
        if(T > 1)
            qsort(caso, T, sizeof(Palavra), compare);

        for(i=0; i<T-1; i++)
            printf("%s ", caso[i].palavra);
        printf("%s\n", caso[i].palavra);
        N--;
    }

    system("pause");
    return 0;
}