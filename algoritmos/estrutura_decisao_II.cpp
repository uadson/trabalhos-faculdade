/*Receba um número qualquer e informe se ele é positivo ou negativo*/

#include<iostream>

using namespace std;

int num;

int main()
{
	cout<<"Informe um numero: ";
	cin>>num;
	
	cout<<"\n";
	
	if(num > 0)
	{
		cout<<"POSITIVO";
	}
	else if(num < 0)
	{
		cout<<"NEGATIVO";
	}
	else
	{
		cout<<"DIGITE UM NUMERO MAIOR OU MENOR QUE ZERO!";
	}
}
