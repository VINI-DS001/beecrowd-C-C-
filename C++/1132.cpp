#include <iostream>
using namespace std;

int main(){
    int X, Y, j, soma=0;
    int i;
    
    cin >> X;
    cin >> Y;
    
    if(X > Y){
        j = Y;
        Y = X;
        X = j;
    }
    
    for(i = X; i <= Y; i++){
        if(i%13 != 0){
            soma += i;
        }
    }
    cout << soma << endl;
    return 0;
}