#include <iostream>
#include <cstdlib>
#include <c   onio.h>
using namespace std;

void salarios( ){
     setlocale(LC_ALL, "Portuguese");
     double cont =0, salario, salariomaior, salariomenor; char resp = '0';
     while ( resp != 27 ){
           cout << "\nSal�rio:"; cin >> salario; cont ++;
           if (cont==1) {
                        salariomenor = salario;
                        salariomaior = salario;
                        }
           if (salariomaior > salario){
                                         salariomenor = salario;
                                         }
           if (salariomenor < salario){
                            salariomaior = salario;
                            }
           cout<< "Digite ENTER para continuar ou ESC para sair...";
           resp = getch(); // l� o c�digo da tecla pressionada
           
           }
     cout << "\nSal�rio Menor: " << salariomenor << endl;
     cout << "\nSal�rio Maior: " << salariomaior << endl;
     system ("pause");
     }

main(){
       int tecla;       
       while (tecla != 2){
             system("cls");
             cout << "1.Executar\n2.Sair do programa\nItem: ";
             cin >> tecla;
             if (tecla == 1){
                       salarios();
                       }
                }
       cout << "Programa Finalizado!\n";
       system("pause");
return 0;}
