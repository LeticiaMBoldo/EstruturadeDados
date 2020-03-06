#include<iostream>
#include<math.h>

using namespace std;

float celsius = 0;

float FAHREINHEIT(float Fahr){
	celsius = (5.0/9.0)*(Fahr-32);
	return(celsius);
}

int main(){
	float fahreinheit = 0, resultado;
	
	for (int i = 0; i <= 99; i++){
		resultado = FAHREINHEIT(i);
		
		cout<<"FAHREINHEIT = "<<resultado<<endl;
	}
}
