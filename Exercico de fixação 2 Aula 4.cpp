//Exercicio de Fixação 2 Aula 4


#include <iostream>
#include<math.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, C, S, AR;	string TIPO;	int tecla = 0;
	
	cout << "1 Ler, calcular e exibir\n2 Sair\n Item: ";
	cin >> tecla;
	
	switch (tecla){
		case 1: {
			cout << "Digite lado A: ";	cin >> A;
			cout << "Digite lado B: ";	cin >> B;
			cout << "Digite lado C: ";	cin >> C;
			
			if ( A==B && B==C){
				TIPO ="Equilatero!";
				
				S = (A+B+C)/2;
				AR = S*(S-A)*(S-B)*(S-C);
				
				cout << "\nTriangulo de lado = " << A; cout << ";" << B; cout << ";" << C;
				cout << "\nSemiperimetro = " << S;
				cout << "\nArea = " << AR; 
			}
			else if( A!=B && A!=C && B!=C){
				TIPO ="Escaleno";
				
			    S = (A+B+C)/2;
				AR = S*(S-A)*(S-B)*(S-C);
				
				cout << "\nTriangulo de lado = " << A; cout << ";" << B; cout << ";" << C;
				cout << "\nSemiperimetro = " << S;
				cout << "\nArea = " << AR;
			}
			else{
				TIPO = "Isóceles!";
				
				S = (A+B+C)/2;
				AR = S*(S-A)*(S-B)*(S-C);
				
				cout << "\nTriangulo de lado = " << A; cout << ";" << B; cout << ";" << C;
				cout << "\nSemiperimetro = " << S;
				cout << "\nArea = " << AR;
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
