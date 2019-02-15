#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    string resp = "nao";
    float valor = 0, saldo = 0, media = 0;
    
    while(resp == "nao"){
               cout << "Digite Valor:";
               cin >> valor;
               saldo = saldo + valor;
               cout << "Deseja sair ?";
               cin >> resp;
               }
    cout << "Saldo Acumulado= " << saldo << endl;
    
    system ("pause");
    return 0;
    }
