#include<iostream>
using namespace std;
float peso, altura, imc;
void Calculaimc()
{
	imc=peso/(altura*altura);
}

int main()
{
	cout<<"peso = ";cin>>peso;
	cout<<"altura = ";cin>>altura;
	Calculaimc();
	cout<<"imc = "<<imc;
}
