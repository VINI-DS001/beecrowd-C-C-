#include <iostream>
using namespace std;

int main(){
	
	int X, Y;
	
	do{
		cin >> X;
		cin >> Y;
		
		if(X > 0 && Y > 0){
			cout << "primeiro" << endl;
		}
		
		if(X >0 && Y <0){
			cout << "quarto" << endl;
		}
		
		if(X <0 && Y <0){
			cout << "terceiro" << endl;
		}
		
		if(X <0 && Y >0){
			cout << "segundo" << endl;
		}
	}while(X != 0 || Y != 0);  
		
	
	
	return 0;
}