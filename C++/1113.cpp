#include <iostream>
using namespace std;

int main(){
	
	int X, Y;
	
	do{
		cin >> X;
		cin >> Y;
		
		if(X > Y){
			cout << "Decrescente" << endl;
		}
		
		if(X < Y){
			cout << "Crescente" << endl;
		}
		
		
	}while(X != Y);
	
	return 0;
}