#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, valor=1;
    
    cin >> N;
    
    for(int i=0; i<N; i++){
        cout << valor << " " << valor * valor << " " << valor * valor * valor << endl;
        valor++;
    }
    
    return 0;
}