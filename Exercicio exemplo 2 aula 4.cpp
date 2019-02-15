//Exercicio Exemplo 2 Aula 4

#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
    float N1, N2, MG, F; char tecla ='0';

    cout << "\nMenu\n Ler, Calcular e exibir\n2 Sair\nItem: ";
    tecla = getch();

    switch (tecla) {
        case '1': {
            cout << "\nDigite n1: ";    cin >> N1;
            cout << "\nDigite n2: ";    cin >> N2;
            cout << "\nDigite faltas: ";    cin >> F;
            
            MG = sqrt(N1 * N2);

            if (MG < 6 || F > 20 ){
                cout << "\nReprovado!\nMédia " << MG;
                cout << "\nFaltas " << F << endl;
                }
            else{
                cout << "\nAprovado!\nMédia " << MG;
                cout << "\nFaltas " << F << endl;
            }
        break;
        }
        case '2': {
            cout << "\nPrograma Finalizado\n"; return 0; break;
        }
    return 0;
    }
}
