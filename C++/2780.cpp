#include <iostream>
using namespace std;

int main(){
	int D;
	cin >> D;
	
	if(D <= 800)
	cout << "1" << endl;
	
	if(D > 800 && D <= 1400)
	cout << "2" << endl;
	
	if(D > 1400 && D <= 2000)
	cout << "3" << endl;
	
	return 0;
}