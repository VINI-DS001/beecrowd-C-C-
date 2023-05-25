#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int cod, alc = 0, gas = 0, di = 0;
    
    while(true){
                cin >> cod;
                if(cod == 1) alc++;
                else if(cod == 2) gas++;
                else if(cod == 3) di++;
                else if(cod == 4) break;
                else continue;
    }
    
    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << alc << "\n";
    cout << "Gasolina: " << gas << "\n";
    cout << "Diesel: " << di << "\n";
    return 0;
}