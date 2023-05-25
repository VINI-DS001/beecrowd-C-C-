#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int X, Y;
    
    cin >> X;
    cin >> Y;
    
    int n = 1;
    
    for(int i = 1; i <= Y; i++){
            if(n == X) {
                 cout << i << "\n";
                 n = 1;
            }
            else{
            cout << i << " ";
            n++;
            }
    }
    return 0;
}