#include <iostream>
#include <math.h>

using namespace std;

float lado1 = 0, lado2 = 0, lado = 0, raio  = 0, base2 = 0, base1 = 0, altura = 0, circulo = 0, quadrado = 0, retangulo = 0, trapezio = 0;
float  pi = 3.1415;
int figura;


float QUADRADO (float lado){
	
	//para informar o quadrado
	cout<<"informe o lado do quadrado: ";
	cin>>lado;
	
	quadrado = lado * lado;
	
	cout<<"Quadrado =  "<<quadrado<<endl;
	
}

float RETANGULO(float lado1, float lado2){
	
	//informar os lados para formar o calculo do quadrado e do retangulo
	cout<<"informe o primeiro lado: ";
	cin>>lado1;
	
	//informar o segundo lado para formar o calculo do quadrado e do retangulo
	cout<<"informe o segundo lado: ";
	cin>>lado2;
	
	retangulo = lado1 * lado2;
	cout<<"Ret�ngulo =  "<<retangulo<<endl;	
}

float CIRCULO(float raio){
	
	//informar o raio para calcular o circulo;
	cout<<"Informar o Raio: ";
	cin>>raio;
	
	
	circulo = 2*pi*pow(raio,2);
	cout<<"Circulo =  "<<circulo<<endl;	
}

float TRAPEZIO(float base1, float base2, float altura){
	
	//informar a base para calcular o trap�zio;
	cout<<"informar a primeria base: ";
	cin>>base1;
	
	//informar a base para calcular o trap�zio;
	cout<<"Informar a segunda base: ";
	cin>>base2;
	
	//informar a altura para calcular o trap�zio;
	cout<<"Informar a altura: ";
	cin>>altura;
	
	trapezio = (base1+base2)*altura/2;
	
	cout<<"Trap�zio =  "<<trapezio<<endl;
}



int main(){

	cout<<"informe qual figura geomtrica pretende calcular";
	cout<<"(quadrado = 1, ret�ngulo = 2, circulo = 3 e trap�zio = 4)";
	cin>>figura;
	
	
	switch (figura)
	{
		case 1:
			quadrado = QUADRADO(lado);
		break;
		
		case 2:
			retangulo = RETANGULO(lado1, lado2);
		break;
		
		
		case 3:
			circulo = CIRCULO(raio);
		break;
		
		
		case 4:
			trapezio = TRAPEZIO(base1, base2, altura);
		break;
		
		default :
			cout<<"Valor n�o confere, tentar de novo!";
	}	
		
}
