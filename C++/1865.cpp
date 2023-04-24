#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int C, N;
    string nome;
    
    cin >> C;
    
    for(int i=0; i<C; i++){
        cin >> nome >> N;
        
        if(nome == "Thor"){
            cout << "Y" << endl;
        }else{
            cout << "N" << endl;
        }
    }
    
    return 0;
}