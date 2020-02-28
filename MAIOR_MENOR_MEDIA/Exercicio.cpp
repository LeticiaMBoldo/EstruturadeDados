# include <iostream>
#include "biblioteca.h"

using  namespace  std ;

float num1, num2, media;

float MAIOR()
{
	if (num1 > num2) {
		cout << " O PRIMEIRO NÚMERO É MAIOR QUE O SEGUNDO !!!! " ;
	}
	else if (num2> num1) {
			cout << " O SEGUNDO NÚMERO É MAIOR QUE O PRIMEIRO !!!! " ;
		}
		else {
			cout << " OS DOIS NÚMEROS SÃO SEMELHANTES !!!!!! " ;
		}
}

float MENOR()
{
	if (num1 < num2) {
		cout << " O PRIMEIRO NÚMERO É MAIOR QUE O SEGUNDO !!!! " ;
	}
	else if (num2 < num1) {
			cout << " O SEGUNDO NÚMERO É MAIOR QUE O PRIMEIRO !!!! " ;
		}
		else {
			cout << " OS DOIS NÚMEROS SÃO SEMELHANTES !!!!!! " ;
		}
}

int  main () {
	cout << " informe o primerio número = " ;
	cin >> num1;
	
	cout << " informe o segundo número = " ;
	cin >> num2;
	
	MAIOR();
	MENOR();
	media = Media(num1, num2);
	
	cout << " " << endl;	
	cout << " A MÉDIA DOS VALORES É DE = " << media;
	
}
