#include <iostream>

using namespace std;

int main(){
	int X,i;
	cout << "Digite um numero de 1 ate 1000: " << endl;
	cin >> X;

	for(i = 0; i <= X; i++){
		if(i%2 != 0)
		cout << i << endl;
	}
	
	
	system("pause");
	
	return 0;
}