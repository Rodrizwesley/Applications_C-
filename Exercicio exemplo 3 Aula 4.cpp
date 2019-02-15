// Exercicio exemplo 3 Aula 4

#include <iostream>
#include<math.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, C;	string TIPO;	int tecla = 0;
	
	cout << "1 Ler, calcular e exibir\n2 Sair\n Item: ";
	cin >> tecla;
	
	switch (tecla){
		case 1: {
			cout << "Digite lado A: ";	cin >> A;
			cout << "Digite lado B: ";	cin >> B;
			cout << "Digite lado C: ";	cin >> C;
			
			if ( A==B && B==C){
				TIPO ="Equilatero!";
			}
			else if( A!=B && A!=C && B!=C){
				TIPO ="Escaleno";
			}
			else{
				TIPO = "Isóceles!";
			}
			cout << endl << TIPO << endl;
			break;
		}
		case 2: {
			cout << "\nPrograma Finalizado!\n";	return 0;
			break;
		}
	}
	return 0;
}
