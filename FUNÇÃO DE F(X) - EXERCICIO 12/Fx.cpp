#include<iostream>

using namespace std;

float Fx = 0;

float Funcao(float x){
	Fx = 2 * (x * x) - 3 * x + 5;
}

int main(){
	for(float X = 0; X <= 20; X++){
		Funcao(X);	
		cout<<Fx<<endl;
	}
}




