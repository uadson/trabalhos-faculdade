/* Uma lanchonete está disponibilizando para seus clientes um terminal por meio 
do qual poderão fazer os pedidos. Para que isso aconteça, o terminal deve exibir 
o menu de itens disponíveis conforme se vê a seguir:

*** Cardápio ***

100 – Hambúrguer – R$5,50

101 – Cachorro-quente – R$4,50

102 – Milkshake – R$7,00

103 – Pizza brotinho – R$8,00

104 - Cheeseburguer – R$8,50

Informe o código do seu pedido:

Uma vez que o cliente informe o código do item desejado, o terminal deverá 
perguntar a quantidade de itens que ele deseja pedir. Ao final, o usuário deverá 
informar o pedido do cliente e o valor a pagar. */

#include<iostream>

using namespace std;

int main(){
	
	int codigo, qtde;
	char *item;
	float valor;
	
	setlocale(LC_ALL,"portuguese");
	
	cout << " *** CARDÁPIO *** ";
	
	cout << "\n\n";
		
	cout << " 100 – Hambúrguer – R$5,50\n";
	cout << " 101 – Cachorro-quente – R$4,50\n";
	cout << " 102 – Milkshake – R$7,00\n";
	cout << " 103 – Pizza brotinho – R$8,00\n";
	cout << " 104 - Cheeseburguer – R$8,50\n";
	
	cout << "\n";
	
	cout << " Escolha uma opção: "; cin >> codigo;"\n";
	cout << " Informe a quantidade: "; cin >> qtde;"\n";
	
	switch (codigo){
		
		case 100: item="Hambúrguer"; valor = qtde * 5.50; break;
		case 101: item="Cachorro-quente"; valor = qtde * 4.50; break;
		case 102: item="Milkshake"; valor = qtde * 7.00; break;
		case 103: item="Pizza brotinho"; valor = qtde * 8.00; break;
		case 104: item="Cheeseburguer"; valor = qtde * 8.50; break;
		default: cout << "Pedido Inválido!";
	}
	cout << qtde << " x " << item << " = " << valor;
	
	
}
