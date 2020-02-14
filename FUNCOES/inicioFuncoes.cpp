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
	cout<<"e Lembrando, o Valor é :\n ";
	Valor(5);
	cout<<endl;
	cout<<"É o quadrado é de: \n";
	Q = Quadrado(10);
	cout<<Q;
}

