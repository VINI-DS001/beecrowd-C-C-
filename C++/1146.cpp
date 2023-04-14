#include <iostream>
using namespace std;

int main(){
	int X;
	int i;
	
	do{
		cin >> X;
		for(i = 1; i <= X; i++){
			cout << i << " ";   
		}
		
	}while(X != 0);
	
	return 0;
}