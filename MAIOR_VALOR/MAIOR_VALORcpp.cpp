#include<iostream>

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

float n1, n2, media;

void MaiorMenor(){
	if (n1 > n2){
		cout<<"O PRIMEIRO N�MERO � MAIOR QUE O SEGUNDO!!!!";
	}
	else if (n2 > n1){
			cout<<"O SEGUNDO N�MERO � MAIOR QUE O PRIMEIRO!!!!";
		}
		else {
			cout<<"OS DOIS N�MEROS S�O SEMELHANTES!!!!!!";
		}
}

float MEDIA_DOS_VALORES(){
	media = (n1+n2)/2;
}


int main(){
	cout<<"informe o primerio n�mero = "; 
	cin>>n1;
	
	cout<<"informe o segundo n�mero = "; 
	cin>>n2;
	
	MaiorMenor();
	MEDIA_DOS_VALORES();
	
	cout<<""<<endl;	
	cout<<"A M�DIA DOS VALORES � DE = "<<media;
	
}
