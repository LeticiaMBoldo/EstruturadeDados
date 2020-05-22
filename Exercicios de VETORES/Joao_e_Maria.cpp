#include<iostream>
#define NRODADAS 5
using namespace std;

//PAr João Ganha e Impar Maria ganha

int joao[NRODADAS], maria[NRODADAS];
int vjoao, vmaria, i, soma, resto;

int main()
{
	vjoao=0;
	vmaria=0;
	
	for (i=0; i< NRODADAS; i++){
		//jogadas do João
		cout<<"Nro de dados do joao:";
		cin>>joao[i];
				
		//Jogadas da Maria
		cout<<"Nro de dados do Maria:";
		cin>>maria[i];
		
		soma = joao[i]+maria[i];
		
		rtesto=soma%2;
		if(resto==0){
			vjoao++;
		}
		else {
			vmaria++;
		}
	}
	if(vjoao > vmaria)
		cout<<"Joao GANHOU por "<<vjoao<<"a "<<vmaria;
	else
		cout<<"Maria GANHOU por "<<vmaria<<"a "<<vjoao;
}
