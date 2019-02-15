//Exercicio exemplo 1 aula 4

#include <iostream>
#include <conio.h>
using namespace std;


int main() {
  setlocale(LC_ALL, "Portuguese");

  char tecla; tecla = 'A';

  cout << "\nO código do caractere " << tecla << "é " << (int) (tecla) << endl;

  cout << "\nDigite uma outra tecla qualquer: ";

  tecla = getch();

  cout << "\nO código da tecla digitada é: " << (int) (tecla) << endl;
  cout << "\nA tecla digitada foi :" << (tecla) << endl;

  switch(tecla)
    {
      case 27: cout << "\nVoce digitou ESC: "; break;

      case 32: cout << "\nVoce digitou ESPAÇO: "; break;

      case 13: cout << "\nVoce digitou ENTER: "; break;

      default: cout << "\nVoce digitou "; break;
    }

  return 0;
}
