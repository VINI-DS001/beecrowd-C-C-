#include <iostream>

using namespace std;

int main() {
    
    int n, k, o, i, acum;
    
    cin >> n;
    
    while (n--) {
        acum = 0;
        cin >> k;
        for (i = 0; i < k; i++) { 
            cin >> o;
            acum += o;
        }
        cout << acum - k + 1 << endl;
    }

    return 0;
}