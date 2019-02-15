 //Equação do Segundo Grau.
 //Exercicio de fixação 1 Aula 4
#include <iostream>   
#include <math.h>
#include <cstdlib>
using namespace std;


int main() {
	system("cls");
	setlocale(LC_ALL,"Portuguese");
  
	float a, b, c, delta, x1, x2;
	int escolha;
	
	cout << "1. Ler, Calcular e Exibir\n2. Finalizar Execução\n ";
	cin >>  escolha;
	
	switch (escolha){
		case 1 :{
				cout << "\n ------------------------------------------------ \n\n";
				cout << "Defina A desta equacao\n";
				cin >> a;
				cout << "Defina B desta equacao\n";
				cin >> b;
				cout << "Defina C desta equacao\n";
				cin >> c;
	
				delta = pow(b,2) - 4 * ( a * c );
						
				if (delta < 0){
					cout << "Nao existe raizes reais para esta equacao\n";
					cout << "\n ------------------------------------------------ \n\n";
				}
				else{
					x1 = -b + sqrt(delta) / 2 * a;
					x2 = -b - sqrt(delta) / 2 * a;
					cout << "As raizes desta equacao sao:\n";
					cout << "X1 = " <<  x1;
					cout << "\nX2 = " << x2;
					cout << "\n ------------------------------------------------ \n\n";
				}
			break;
		}
		case 2 :{
				cout << endl << endl;
				
			break;
		}
	}  	

 return 0; 
}

