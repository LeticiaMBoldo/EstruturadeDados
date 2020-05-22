#include<iostream>

using namespace std;

int M[3][3] = {{1,2,3},
			   {4,5,6},
			   {7,8,9}};
			   
int linha, coluna;
int main() {
	for(linha=0; linha<3; linha++)
	{
		cout<<endl;
		for(coluna=0; coluna<3; coluna++)
		{
				cout<< M[linha][coluna]<< " ";
		}
	}
}
