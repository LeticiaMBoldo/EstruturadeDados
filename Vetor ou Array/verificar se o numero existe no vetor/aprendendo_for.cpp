#include<iostream>
using namespace std;

int a[10] = {5,8,3,9,2,7,10,1,6,4};

int main(){
	int k, i, pos;
	
	cout<<"Valor procurado = ";
	cin>>k;
	
	for(i=0;i<10;i++){
		if(k==a[i])
			pos=i;
	
		if(pos<0){
			cout<<"Valor não encontrado";
		}
		else{
			cout<<"Valor encontrado"<<pos;
		}
	}
}
