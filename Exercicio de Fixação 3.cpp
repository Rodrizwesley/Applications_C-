//Exercicio L Pagina 26
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

double lerA(){
       double A;
       cout << "Digite A: ";
       cin >> A;
       return A;
       }

double lerB(){
       double B;
       cout << "Digite B: ";
       cin >> B;
       return B;
       }

double lerC(){
       double C;
       cout << "Digite C: ";
       cin >> C;
       return C;
       }

double calculo(double A, double B, double C){
       double result = pow ((A+B+C), 2);
       return result;
       }

void exibir(double A, double B, double C, double calculo){
     cout << "\nValor de A = " << A;
     cout << "\nValor de B = " << B;
     cout << "\nValor de C = " << C;
     cout << "\nResultado da Soma = " << (A+B+C);
     cout << "\nQuadrado da Soma = " << calculo << endl;
     
     system ("pause");
     }
     
int main(){
    setlocale (LC_ALL,"Portuguese");
    double valA, valB, valC, calc;
    valA = lerA();
    valB = lerB();
    valC = lerC();
    calc = calculo(valA, valB, valC);
    
    exibir(valA, valB, valC, calc);
    
    return 0;
    }
