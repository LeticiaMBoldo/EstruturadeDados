#include<iostream>
using namespace std;

int a[10] = {5,8,3,9,2,7,10,1,6,4};
int b[10] = {5,2,7,1,8,3,0,9,4,6};
int c[10];

int main(){

	
	for(int i = 0; i < 10; i++){
		c[i] = a[i]+b[i];
	}
	cout<<"apresentar resultado"<<endl;
	
	for(int i = 0; i < 10; i++){
		cout<<"valor de vetor é = "<<c[i]<<endl;
	}
}
