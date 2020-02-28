#include<iostream>
#include "minhasFuncoes.h"

using namespace std;

int main(){
	int s, m, a;
	float d;
	
	cout<<" A = "; cin>>a;
	
	s = Somar(a,a);
	m = multiplicar(a,a);
	d = dividir(a,a);
	
	cout<<"Somar = "<<s<<endl;
	cout<<"Multiplicar = "<<m<<endl;
	cout<<"Dividir = "<<d<<endl;
}
