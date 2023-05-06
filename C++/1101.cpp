#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, i;
    int M, N, aux;
    int sum;
    
    while(true){
        
        cin >> M;
        cin >> N;
        
        if(M <= 0) break;
        if(N <= 0) break;
                
        if(M > N){
            aux = M;
            M = N;
            N = aux;
        }
        sum = 0;
        for(i = M; i <= N; i++){
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;
    }
    return 0;
}