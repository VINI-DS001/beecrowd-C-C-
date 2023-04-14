#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int hinicial, hfinal, minicial, mfinal;
    int resultadoh, resultadom;
    
    cin >> hinicial;
    cin >> minicial;
    cin >> hfinal;
    cin >> mfinal;

	resultadoh = hfinal - hinicial;
	resultadom = mfinal - minicial;

    if (resultadoh <= 0){
        resultadoh = (hfinal - hinicial) + 24;
        resultadom = mfinal - minicial;
    }
 	
 	if(resultadom <= 0){
     	resultadom = 60 + (mfinal - minicial);
     	resultadoh = resultadoh - 1;
    }

    if(hinicial == hfinal &&  minicial == mfinal){
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)";
    }
    
    else
    	cout << "O JOGO DUROU " << resultadoh << " HORA(S) E " << resultadom << " MINUTO(S)";
    
    return 0;
}