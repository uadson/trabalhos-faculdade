/*Receba o valor de um salário e informe se é maior ou menor
do que o salário mínimo. Considere o valor de 1000,00 como sendo o 
mínimo.*/

#include <iostream>

using namespace std;

float salario;

int main()
{
	cout<<"Informe o valor do salario: ";
	cin>>salario;
	
	cout<<"\n";
	
	if(salario > 1000.00)
	{
		cout<<"Maior que o salario minimo";
	}
	else
	{
		if(salario == 1000.00)
		{
			cout<<"Igual ao salario minimo";
		}
		else
		{
			cout<<"Menor que o salario minimo";
		}
	}
}
