/*Receba a quantidade de dias que uma pessoa já viveu e informe
quantos anos ela tem. Desconsidere os anos bissextos. Informe se 
a pessoa já é maior de idade.*/

#include<iostream>

using namespace std;

int anoNasc, anoAtual, dias, idade;

int main()
{
	cout<<"Informe seu ano de nascimento: ";
	cin>>anoNasc;
	cout<<"\n";
	
	anoAtual = 2019;
	
	idade = anoAtual - anoNasc;
	
	dias = idade * 365;
	
	cout<<"Voce ja viveu "<<dias<<" dias.";
	
	cout<<"\n\n";
	
	if(idade > 18)
	{
		cout<<"Voce ja e maior de idade.\n";
	}
	else
	{
		cout<<"Voce ainda nao possui maioridade.\n";
	}
}
