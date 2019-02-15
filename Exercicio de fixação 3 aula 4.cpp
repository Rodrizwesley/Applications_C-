// Exercicio de fixação 3 Aula 4

#include <iostream>   
#include <math.h>
#include <cstdlib>
#include <conio.h>
using namespace std;


int main() {
	system("cls");
	setlocale(LC_ALL,"Portuguese");
	
	float A, B, C, triangulo;	triangulo = false;	int tecla = 0;
	
	cout << "1. Ler, Calcular e Exibir\n2. sair\nItem: ";
	cin >> tecla;
	
	switch (tecla){
		
		case 1:{
			cout << "Digite lado A: ";	cin >> A;
			cout << "Digite lado B: ";	cin >> B;
			cout << "Digite lado C: ";	cin >> C;
			
			if( A < B + C && B < A + C && C < A + B){
				
				triangulo = true;
				 
			}
			else {
				
				triangulo = false;
				
			}
			
			if ( triangulo == true ){
				
				cout << "Trata-se de um triangulo";
								
			}
			else {
				
				cout << "Uma figura qualquer de tres lados";
			}
			return 0;
			break;
		}
		case 2:{
			
			cout << "Programa Finalizado!\n";
			return 0;
			break;
		}
	}
	
	
return 0;	
}
