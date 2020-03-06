#include<iostream>
#include<math.h>

using namespace std;

float altura, pesoIdeal;
int sexo;

float PesoIdeal(int sexo, float altura){
	
	if (sexo = 1){
		//se for homem entra e realiza o codigo
		pesoIdeal = 72.7*altura-58;
	}
	else if (sexo = 2){
		//se for mulher entra e realiza o codigo
		pesoIdeal = 62.1*altura-44.7;
		}
		else 
		{
			cout<<"Sexo infalido";
		}
	return(pesoIdeal);		
}


int main() {
	float Resultado;
	
	string sexoNome;
	
	cout<<"Informe o sexo da pessoa: ";
	cout<<"1-HOMEM ou 2-MULHER ";cin>>sexo;
	cout<<"informe a altura: ";cin>>altura;	
	
	Resultado = PesoIdeal(sexo, altura);
	
	if (sexo == 1)
		sexoNome = "Masculino";
	else 
		sexoNome = "Feminino";
	
	
	cout<<"Sexo = "<<sexoNome<<endl<<"PesoIdeal = "<<Resultado;
	
}
