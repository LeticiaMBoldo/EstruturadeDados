#include <iostream>
using namespace std;

int M[4][4], i,j;


int main()
{
	//carrega matriz
	for(i = 0; i<3; i++)//linha
	{ 
		for ( j =0; j<3; j++)//coluna
		{
			cout<<"M["<<i<<"J"<<j<<"J = ";
			cin>>M[i][j];
		}
	}
	//mostrar matriz
	for(i = 0; i<3; i++)//linha
	{ 
		cout<<endl;
		
		for ( j =0; j<3; j++)//coluna
		{
			cout<<"M["<<i<<"J"<<j<<"J = ";
			cin>>M[i][j];
		}
	} 
}
