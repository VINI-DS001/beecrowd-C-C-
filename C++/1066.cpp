#include<bits/stdc++.h>
using namespace std;

int main(){
    int numPar=0,numImpar=0,num,i,numPos=0,numNeg=0;
    for(i=0;i<5;i++){
        cin>>num;
        if(num%2==0){
                numPar++;
            }
            if(num%2!=0){
                numImpar++;
            }
            if(0<num){
                numPos++;
            }
            if(0>num){
                numNeg++;
            }

    }
    cout<<numPar<<" valor(es) par(es)"<<endl;
    cout<<numImpar<<" valor(es) impar(es)"<<endl;
    cout<<numPos<<" valor(es) positivo(s)"<<endl;
    cout<<numNeg<<" valor(es) negativo(s)"<<endl;

    return 0;
}