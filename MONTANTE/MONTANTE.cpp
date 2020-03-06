#include<iostream>
#include<math.h>

using namespace std;

float Montana = 0;

float MONTANA(float taxa, float capital, float n){
	
	Montana = capital*pow((1+taxa/100),n);
	
	return(Montana);
	
}


int main(){
	float taxaJuros, capital, n, Resultado;

	cout<<"Informe a taxa mensal de juros: ";cin>>taxaJuros;
	cout<<"Informe o capital(Valor Aplicado): ";cin>>capital;
	cout<<"Informe a numero de meses da aplicação: ";cin>>n;
	
	Resultado = MONTANA(taxaJuros, capital, n);
	
	cout<<"O valor da montante é de = "<<Resultado;
	
}
