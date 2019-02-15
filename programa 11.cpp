#include <math.h>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
double produto = 1;

for(int i = 1; i <= 9; i++){
produto *= i; // produto = produto * i
}
cout << "Produto acumulado:" << produto << endl;

system("pause");
return 0;}
