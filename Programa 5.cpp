//Programa exemplo 1

#include <iostream>
#include <cstdlib>
using namespace std;

void exibir (double n1, double n2){
     if (n1 == 0 || n2 == 0) return;
     else
     cout << "\n A média é " << (n1 + n2)/2;
     cout << endl;
     system("pause");
     }
     
int main(){
    setlocale(LC_ALL,"Portuguese");
    exibir(5, 9.3);
    double X = 4, Y = 5.5;
    exibir(X, Y);
    system("pause");
    return 0;
    }
    
