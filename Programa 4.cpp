#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;
      int main(){
          system("cls");
          setlocale(LC_ALL, "Portuguese");
          
          double nota1 = 0, nota2 = 0, media = 0;
          
          cout << "\nDigite as notas 1 e 2 separads por espaço:\n";
          cin >> nota1; cin >> nota2;
          
          media = (nota1 + nota2)/2;
          
          cout << "\nO resultado será : " << media << endl << endl;
          
          system("pause");
           
          }

