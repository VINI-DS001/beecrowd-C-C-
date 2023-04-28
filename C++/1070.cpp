#include<bits/stdc++.h>

using namespace std;

int main(){
    int X, i=0;
    
    cin >> X;
    
    while(i < 6){
        if(X%2 != 0){
            cout << X << endl;
            i++;
        }
        X++;
    }
    
    return 0;
}