# include<iostream>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int num, par, impar;
	
	num = 0;
	
	cout << "Informe um número: "; cin >> num; cout << "\n";
	
	while (num > 0){
		
		if (num % 2 == 0){
			
			cout << "PAR !\n\n";
		}
		
		else{
			
			cout << "IMPAR !\n\n";
		}
		
		cout << "Informe um número: "; cin >> num; cout << "\n";
		
		}
	cout << "FIM!";	
	}
