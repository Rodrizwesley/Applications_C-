#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

      int main(){
          system("cls");
          setlocale(LC_ALL, "Portuguese");
          
          double V = 0, pi = 3.14, r = 0, h = 0;
          
          cout <<"\nInsira os valores referentes ao raio e altura da lata \nrespectivamente separados por espaço\n";
          cin >> r; cin >> h;
          
          V = pi * pow(r,2) * h;
          
          cout << "\nO volume desta lata é de: " << V << endl;
          
          system("pause");
          }
