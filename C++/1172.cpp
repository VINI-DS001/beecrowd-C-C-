#include <bits/stdc++.h>

using namespace std;

int main(){
    int X;
    
    for(int i=0; i<10; i++){
            cin >> X;
            if(X <= 0) X = 1;
            
            cout << "X[" << i << "] = " << X << "\n";
    }
    return 0;
}