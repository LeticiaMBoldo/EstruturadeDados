# include <iostream>

using namespace std;

void Mensagem()
{
	cout<<"Bom dia minha coisa linda";
}

void Valor(int x)
{
	cout<<x;
}


int Quadrado(int x)
{
	int k;
	k = x * x;
	return(k);
}

int main()
{
	int Q;
	
	Mensagem();
	cout<<endl;
	cout<<"e Lembrando, o Valor � :\n ";
	Valor(5);
	cout<<endl;
	cout<<"� o quadrado � de: \n";
	Q = Quadrado(10);
	cout<<Q;
}

