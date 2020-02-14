#include <iostream>

using namespace std;

int main()
{
	float imc, peso, altura, tGordo = 0, tMagros = 0, TNormal = 0;
	int cont = 0, magro = 0, gordo = 0, normal = 0;
	
	while (cont < 5){
		
	cout<<"Informe o seu peso: ";
	cin>>peso;
	cout<<"Informe a altura: ";
	cin>>altura;
	
	imc = peso / (altura * altura);
	
	if (imc < 22)
	{
		cout<<"Magro"<<endl;
		magro++;	
	}
	else if (imc < 27)
	{
		cout<<"Normal"<<endl;
		normal++;
	}
	else
	{
		cout<<"Gordo"<<endl;
		gordo++;
	}
	
	cont++;	
	}
	
	cout<<"Total de magros: "<<magro;
	cout<<"Total de Normal "<<normal;
	cout<<"Total de Gordos: "<<gordo;
	
	tGordo = (gordo /5.0) * 100;
	tMagros = (magro /5.0) * 100;
	TNormal = (normal /5.0) * 100; 
	
	cout<<"porcentagem de gordos"<<tGordo<<endl;
	cout<<"porcentagem de magros"<<tMagros<<endl;
	cout<<"porcentagem de normais"<<TNormal<<endl;
	
	
}
