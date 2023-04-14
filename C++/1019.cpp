#include <iostream>

using namespace std;
int main(){
	int D,H,M,S;
	
	cout << "Duracao do evento em segundos: " << endl;
	cin >> D;
	
	if(D < 60){
		cout << "0:0:" << D << endl;
	}
	else if(D>60){
		M= D/60;
		cout << "0: :" << M << D % 60 << endl;
	}
	
	system("pause");
	
	return 0;
}