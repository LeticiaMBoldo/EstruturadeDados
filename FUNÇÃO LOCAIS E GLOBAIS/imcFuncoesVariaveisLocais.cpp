#include <iostream>
using namespace std;

float CALCULARIMC(float p, float h)
{
	float indice;
	
	indice = p/(h*h);
	
	return(indice);
}

int main(){
	float peso, altura, imc;
	
	cout<<"PEso = "; cin>>peso;
	cout<<"Altura = "; cin>>altura;
	
	imc = peso/(altura*altura);
	
	cout<<"imc = "<<imc;
	
	if(imc < 22)	{
		cout<<"magro";
	}
	else if(imc >27){
		cout<<"gordo";
		}
		else 
		{
			cout<<"Normal";
		}
	
}
