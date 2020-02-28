#include<iostream>

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

float n1, n2, media;

void MaiorMenor(){
	if (n1 > n2){
		cout<<"O PRIMEIRO NÚMERO É MAIOR QUE O SEGUNDO!!!!";
	}
	else if (n2 > n1){
			cout<<"O SEGUNDO NÚMERO É MAIOR QUE O PRIMEIRO!!!!";
		}
		else {
			cout<<"OS DOIS NÚMEROS SÃO SEMELHANTES!!!!!!";
		}
}

float MEDIA_DOS_VALORES(){
	media = (n1+n2)/2;
}


int main(){
	cout<<"informe o primerio número = "; 
	cin>>n1;
	
	cout<<"informe o segundo número = "; 
	cin>>n2;
	
	MaiorMenor();
	MEDIA_DOS_VALORES();
	
	cout<<""<<endl;	
	cout<<"A MÉDIA DOS VALORES É DE = "<<media;
	
}
