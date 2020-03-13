#include <iostream>

using namespace std;

int main(){
	int i, x[5];
	//ler valor vetor x;
	for(i = 0; i < 5; i++){
		cout<<"x["<<i<<"]=";
		cin>>x[i];
	}
	
	//indice
	for(i = 0; i < 5; i++)
		cout<<"Valor de i = "<<i<<endl;
		
	//mostrar vetor valores em cada indice de x
	for(i = 0; i < 5; i++)
		cout<<"Valor da posição "<<i<<" = "<<x[i]<<endl;
}
