#include <iostream>

using namespace std;
//calculo celsius = (5.0/9.0)*(fahr-32)

float Temperatura(float fahr){
	float celsiusF;
	celsiusF = (5.0/9.0)*(fahr-32);
	return(celsiusF);
	
}

int main(){	
	float celsius, temperaturainicial;
	int x = 0;
	
	while (x < 5){
		cout<<"informe a temperatura"<<endl; cin>>temperaturainicial;		
		celsius = Temperatura(temperaturainicial);
		
		cout<<"os graus celsius é de "<<celsius;
		x++;
	}

	
}

