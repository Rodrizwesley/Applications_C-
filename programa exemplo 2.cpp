#include <iostream>
#include <cstdlib>
using namespace std;

int somapar ( int inicio, int fim ){
    int contpares =0;
    while ( inicio<= fim ){
          if ( inicio % 2 == 0 ) contpares ++;
          inicio ++;
          }
    return contpares;
    }
void executar (int a, int b){
     int pares = somapar (a, b);
     cout << "Total de pares:" <<pares << endl;
     }

main(){
       setlocale(LC_ALL,"Portuguese");
       int tecla;
       cout << "1.Executar\n2.Sair do programa\nItem: ";
       cin >> tecla;
       switch (tecla){
              case 1:{
                   executar(10, 50);
                   system("pause");
                   }
              case 2:{
                   cout << "Sair do Programa";
                   return 0;
                   }
              }
       return 0;}
