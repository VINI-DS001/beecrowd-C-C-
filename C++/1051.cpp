#include <iostream>

using namespace std;
int main(){
	float renda;
	
	cout << "Digite o valor da sua renda: " << endl;
	cin >> renda;
	
	if(renda >= 0 && renda <= 2000.00){
		cout << "Isento" << endl;
	}
	else if(renda >= 2000.01 && renda <= 3000.00){
		cout << "R$ " << renda * 0.08 << endl;
	}
	else if(renda >= 3000.01 && renda <= 4500.00){
		cout << "R$ " << renda * 0.18 << endl;
	}
	else if(renda > 4500){
		cout << "R$ " << renda * 0.28 << endl;
	}

	return 0;
}