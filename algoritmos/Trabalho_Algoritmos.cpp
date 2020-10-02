#include<iostream>

using namespace std;

int main(){
	
char* item, resposta;
int opcional, op1 = 0, op2 = 0, op3 = 0, op4 = 0;
float vlCarro, vlFinal;

setlocale(LC_ALL,"portuguese");

cout << "CÁLCULO DO VALOR DO AUTOMÓVEL\n\n";

cout << "Informe o valor do automóvel: R$ "; cin >> vlCarro; cout <<"\n\n";

// Início da estrutura de repetição do-while para seleção dos opcionais

do{
 
cout << "                           OPCIONAIS:                               \n";
cout << "0 - Nenhum Opcional;                                                \n";
cout << "1 - Trio Elétrico (alarme, vidro elétrico e tranca elétrica);       \n";
cout << "2 - Ar Condicionado;                                                \n";
cout << "3 - Direção Hidráulica;                                             \n";
cout << "4 - Completo (trio elétrico, ar condicionado e direção hidráulica). \n\n";


cout << "Escolha um opcional:  "; cin >> opcional; cout <<"\n\n";                   

// Estrutura de decisão para que, agregado a estrutura de repetição, seja possível 
//contabilizar a quantidade de cada opcional escolhido

if (opcional == 1)
{op1 ++; cout <<" - Trio Elétrico (alarme, vidro elétrico e tranca elétrica)\n\n";}

else if(opcional == 2)
{op2 ++; cout <<" - Ar Condicionado\n\n";}

else if(opcional == 3)
{op3 ++; cout <<" - Direção Hidráulica\n\n";}

else if(opcional == 4)
{op4 ++; cout <<" - Completo (trio elétrico, ar condicionado e direção hidráulica)\n\n";}

else
	if((opcional != 0) && (opcional > 4))
	
	cout << "Número informado inválido !!\n\n";

	else
	
	cout << "Nenhum opcional selecionado.\n\n";
	
	// Estrutura switch - case para realização dos cálculos referentes a cada opcional
	
    switch(opcional){
  	
  	case 0: item = "Nenhum Opcional"; vlFinal = vlCarro + (vlCarro * 0.08);break;
  	case 1: item = "Trio Elétrico (alarme, vidro elétrico e tranca elétrica)"; 
	  vlFinal = vlCarro + (vlCarro * 0.02) + (vlCarro * 0.08);break;
	case 2: item = "Ar Condicionado"; vlFinal = vlCarro + (vlCarro * 0.02);break;   
	case 3: item = "Direção Hidráulica"; vlFinal = vlCarro + (vlCarro * 0.02); break; 
	case 4: item = "Completo (trio elétrico, ar condicionado e direção hidráulica)"; 
	vlFinal = (vlCarro+(vlCarro * 0.06)+(vlCarro * 0.08)) - (vlCarro * 0.035);break; 
	
}

cout <<"O valor total do automóvel é: R$ " << vlFinal; cout << "\n\n";

cout <<" Deseja continuar ? [S/N] "; cin >> resposta; cout << "\n";

} while ((resposta != 'N') && (resposta != 'n'));

  
  cout <<"O opcional  1 - Trio Elétrico (alarme, vidro elétrico e tranca elétrica) foi selecionado " 
  << op1  << " vez (es)\n";
  cout <<"O opcional  2 - Ar Condicionado foi selecionado " << op2  << " vez(es)\n";
  cout <<"O opcional  3 - Direção Hidráulica foi selecionado " << op3 << " vez(es)\n";
  cout <<"O opcional  4 - Completo (trio elétrico, ar condicionado e direção hidráulica) foi selecionado " 
  << op4 << " vez(es)\n";
  
}

  
  











