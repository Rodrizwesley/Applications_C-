//Exercicio exemplo 1 aula 4

#include <iostream>
#include <conio.h>
using namespace std;


int main() {
  setlocale(LC_ALL, "Portuguese");

  char tecla; tecla = 'A';

  cout << "\nO c�digo do caractere " << tecla << "� " << (int) (tecla) << endl;

  cout << "\nDigite uma outra tecla qualquer: ";

  tecla = getch();

  cout << "\nO c�digo da tecla digitada �: " << (int) (tecla) << endl;
  cout << "\nA tecla digitada foi :" << (tecla) << endl;

  switch(tecla)
    {
      case 27: cout << "\nVoce digitou ESC: "; break;

      case 32: cout << "\nVoce digitou ESPA�O: "; break;

      case 13: cout << "\nVoce digitou ENTER: "; break;

      default: cout << "\nVoce digitou "; break;
    }

  return 0;
}
