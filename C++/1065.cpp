#include <iostream>
using namespace std;
 
int main() {
	int cont = 0;
	int i,num;
	
	for(i = 1; i <= 5; i++){
		cin >> num;
		
		if(num%2 == 0)
            cont++;
	}
	
	cout << cont << " valores pares" << endl;
 	
    
    return 0;
}