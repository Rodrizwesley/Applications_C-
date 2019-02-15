#include <iostream>
#include <cstdlib>
using namespace std;

double lerbase(){
          double base;
          cout << "\nDigite a Base: ";
          cin >> base;
          return base;
          }
double leraltura(){
            double altura;
            cout << "\nDigite a Altura: ";
            cin >> altura;
            return altura;
            }
double calcarea(double base, double altura){
               double area;
               area = (base * altura)/2;
               return area;
               }               
void exibir(double base, double altura, double area, double media){
     cout << "\nBase..: " << base;
     cout << "\nAltura: " << altura;
     cout << "\nArea..: " << area;
     cout << "\nMedia das areas calculadas..: " << media << endl;
     }
double calcmedia(double saldo, double cont){
       double media;
       media = saldo / cont;
       return media;
       }

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    double base, altura, area, saldo, media ;
    int tecla = 0, cont = 1;
    
    while(tecla != 4){
                    cout << "\n***Menu***\n\n1. Ler\n2. Calcular\n3. Exibir\n4. Sair\nItem: ";
                    cin >> tecla;
    
                    if(tecla == 1){
                             base = lerbase();
                             altura = leraltura();
                             }
                             else if(tecla == 2){
                                  area = calcarea(base, altura);
                                  cont = cont + 1;
                                  saldo = saldo + area;
                                  media = calcmedia(saldo, cont);
                                  }
                             else if(tecla == 3){
                                  exibir(base, altura, area, media);
                                  system ("pause");
                                  }
                    }
    cout << "\nPrograma finalizado!\n";
    system ("pause");
    return 0;
    }
