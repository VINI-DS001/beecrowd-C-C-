#include<iostream>
#include<iomanip>
using namespace std;
 
int main()
{
    float num, soma=0;
    int i, p=0;
    
    for(i=1;i<=6;i++){
        cin >> num;
        if(num>0){
          soma= soma + num;
          p++;
        }
    }
    float media = soma/p;
    
    cout<<p<<" valores positivos"<<endl;
    cout<<fixed;
    cout<<setprecision(1)<<media<<endl;
    return 0;
}