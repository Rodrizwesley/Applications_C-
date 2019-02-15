#include <iostream>
#include <cstdlib>
using namespace std;

int contZeros( string texto )
{ int cont =0, contzeros =0;
while ( cont <= texto.length() ) {
if (texto.substr(cont, 1) == "0") {contzeros ++;}
cont ++; }//fim while
return contzeros; } // fim contzeros
void executar () {
int zeros = contZeros( "prog00124000els" );
cout << "Quantidade de zeros:"<< zeros << endl; }
int main() {
    int tecla;
    cout << "1.Executar\n2.Sair do Programa\nItem: ";
    cin >> tecla;
    switch (tecla){
           case 1: {executar(); system("pause"); }
           case 2: {cout << "Finalizando Programa\n";
                system("pause");}
                }
    return 0;
}
