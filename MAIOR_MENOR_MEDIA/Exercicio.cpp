# include <iostream>
#include "biblioteca.h"

using  namespace  std ;

float num1, num2, media;

float MAIOR()
{
	if (num1 > num2) {
		cout << " O PRIMEIRO N�MERO � MAIOR QUE O SEGUNDO !!!! " ;
	}
	else if (num2> num1) {
			cout << " O SEGUNDO N�MERO � MAIOR QUE O PRIMEIRO !!!! " ;
		}
		else {
			cout << " OS DOIS N�MEROS S�O SEMELHANTES !!!!!! " ;
		}
}

float MENOR()
{
	if (num1 < num2) {
		cout << " O PRIMEIRO N�MERO � MAIOR QUE O SEGUNDO !!!! " ;
	}
	else if (num2 < num1) {
			cout << " O SEGUNDO N�MERO � MAIOR QUE O PRIMEIRO !!!! " ;
		}
		else {
			cout << " OS DOIS N�MEROS S�O SEMELHANTES !!!!!! " ;
		}
}

int  main () {
	cout << " informe o primerio n�mero = " ;
	cin >> num1;
	
	cout << " informe o segundo n�mero = " ;
	cin >> num2;
	
	MAIOR();
	MENOR();
	media = Media(num1, num2);
	
	cout << " " << endl;	
	cout << " A M�DIA DOS VALORES � DE = " << media;
	
}
