#include<iostream>
using namespace std;

int a[10] = {5,8,3,9,2,7,10,1,6,4};
int b[10];

int main(){
	int k;
	
	cout<<"Valor procurado = ";
	cin>>k;
	
	for(int i = 0; i < 10; i++){
		b[i] = k*a[i];
		cout<<b[i]<<endl;
	}
	cout<<"apresentar resultado";
	
	for(int i = 0; i < 10; i++){
		cout<<"valor de vetor é = "<<b[i]<<endl;
	}
}
