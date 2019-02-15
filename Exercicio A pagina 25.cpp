#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

      int main(){
          system("cls");
          setlocale(LC_ALL, "Portuguese");
          
          double C1=0, F1=0;
          
          cout << "\nInsira o a temperatura em Celsius 'ºC' para conversão:\n";
          cin >> C1;
          
          F1 = ((9 * C1) + 160 )/5;
          
          cout << "\nA temperatura em Fahrenheit é = " << F1 << endl << endl;
          system("pause");
          
          }
