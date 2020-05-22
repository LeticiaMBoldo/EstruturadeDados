#include<iostream>

using namespace std;

int M[3][3] = {{1,2,3},
			   {4,5,6},
			   {7,8,9}};
			   
int linha, coluna, soma;
float media;


int main() {
	for(linha=0; linha<3; linha++)
	{
		cout<<endl;
		for(coluna=0; coluna<3; coluna++)
		{
				cout<< M[linha][coluna]<< " ";
		}
			//somar valores da matriz
		soma=0;
		for(linha=0; linha<3; linha++){
			for(coluna=0; coluna<3; coluna++){
				soma=soma+M[linha][coluna];
		}
		}
		cout<<endl<<"Soma total = "<<soma;
		media=soma/9;
		cout<<endl<<"Media = "<<media;
	}

}
