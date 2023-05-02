#include<stdio.h>

int main(){
    int N;
    float n1,n2,n3,soma,media;
    
    scanf("%d", &N);
    
    for(int i=0;i<N;i++){
        scanf("%f %f %f",&n1,&n2,&n3);
        
        soma=n1*2+n2*3+n3*5;
        media=soma/(2+3+5);
        
        printf("%.1f\n",media);
    }

    return 0;
}