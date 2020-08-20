#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float nota1, nota2, nota3, nota4, media;
	
	nota1 = 7;
	nota2 = 5.5;
	nota3 = 8;
	nota4 = 9.5;
	
	media = (nota1 + nota2 + nota3 + nota4 / 4);
	
	cout << "A media entre as notas e: " << media;
	return 0;
}