# include<iostream>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"portuguese");
	int num;
	
	cout << "Informe um número par menor ou igual a 100: ";
	cin >> num;
	
	while (num<=100){
		
		cout << num << "\n";
		
		num += 2;
		
	}
}
