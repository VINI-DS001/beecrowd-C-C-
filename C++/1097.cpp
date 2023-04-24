#include <bits/stdc++.h>

using namespace std;

int main(){
    int J = 7;
    
    for(int I = 1; I <= 9; I++){
            cout << "I=" << I << " " << "J=" << J << "\n";
            cout << "I=" << I << " " << "J=" << J-1 << "\n";
            cout << "I=" << I << " " << "J=" << J-2 << "\n";
            I++;
            J+=2;
    }
    return 0;
}