#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	double T,Vm,S;
	
	cin >> T;
	cin >> Vm;
	
	S = (T*Vm)/12;
	
	cout << fixed << setprecision(3);
	cout << S << endl;
	
	system("pause");
	
	return 0;
}