//Exercicio I Pagina 26
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

void mostrar(double num1, double num2) {
     double dif, quad;
     dif = num1 - num2;
     quad = pow(dif,2);
     cout << "\nA diferen�a de " << num1 << " por " << num2 << " � igual a " << dif;
     cout << "\nO quadrado da diferen�a � igual a " << quad << endl;
     }

int main(){
    setlocale(LC_ALL,"Portuguese");
    double num1, num2;
    cout << "Insira dois valores respectivamente: ";
    cin >> num1 ; cin >> num2;
    
    mostrar(num1, num2);
    
    system("pause");
    }
