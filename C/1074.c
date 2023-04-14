#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,X,a;

    printf("Digite a quantidade de valores a serem lidos: ");
    scanf ("%d", &N);

    for(a=1;a<=N;a++){


    scanf ("%d",&X);


    if(X==0)


    printf("NULL\n");


    else if(X<=0&&X%2==0)


    printf ("EVEN NEGATIVE\n");


    else if(X<=0&&X%2==-1)


    printf ("ODD NEGATIVE\n");


    else if(X>=0&&X%2==0)


    printf ("EVEN POSITIVE\n");


    else if(X>=0&&X%2==1)


    printf ("ODD POSITIVE\n");


    }

    system("pause");

    return 0;
}
