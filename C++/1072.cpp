#include <iostream>

using namespace std;

int main(){
    int X, A, j=0, k=0;
    
    cin >> X;
    for(int i = 0; i < X; i++){
            cin >> A;
            if(A >= 10 && A <= 20){
                j++;
            }else {
                k++;
            }
    }
    cout << j << " in\n";
    cout << k << " out\n";
    
    return 0;
}