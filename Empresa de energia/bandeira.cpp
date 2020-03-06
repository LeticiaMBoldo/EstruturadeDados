#include <iostream>
#include <math.h>

using namespace std;

float valor, valorBAND;

float TIPOCONSUMIDOR(float tCon, float kWh){
	if (tCon == 1){
		valor = kWh * 0.3;			
	}
	else if (tCon == 2){
		valor = kWh * 0.5;
	}
	else {
		valor = kWh * 0.7;
	}
	return(valor);
}

float BANDEIRA(float band, float kWh){	
	cout<<band<<endl;
	cout<<kWh;
	
	if (band == 1){
		valorBAND = valor;		
	}
	else if (band == 2){
		valorBAND = valor+(valor*(5/100));
	}
	else {
		valorBAND = valor+(valor*(7/100));
	}
	return(valorBAND);
}

int main(){
	float tConsumidor, kWh, bandeira;
	cout<<"Informe o tipo de consumidor: (1-residencial, 2-comercial, 3-industrial )";
	cin>>tConsumidor;
	cout<<""<<endl;
	
	cout<<"informe a quantidade de kWh : ";cin>>kWh;
	
	cout<<"Informe a bandeira: (1-branca, 2-Amarela, 3-vermelha): ";cin>>bandeira;
	
	cout<<"O consumo Geral foi de = "<<TIPOCONSUMIDOR(tConsumidor, kWh)<<endl;
	
	cout<<"O Acrecimo da bandeira é de = "<<BANDEIRA(bandeira, kWh);
	
	
	
}
