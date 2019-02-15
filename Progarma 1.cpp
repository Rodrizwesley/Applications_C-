#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    
    int contador =0;
    int decrementa =20;
    
    while (contador <= 10){
          contador = contador + 1;
          decrementa = decrementa - 5;
          }
    cout << "contagem = " << contador << endl;
    cout << "Decremento = " << decrementa << endl;
    
    system("pause");
    return 0;
    }
