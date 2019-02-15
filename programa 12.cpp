#include <math.h>
#include <cstdlib>
#include <iostream>
using namespace std;

int main (){
int mod, cont = 0;

for(int i =5; i<= 25; i++){ 
        mod = i % 2;
        if(mod == 0){ 
               cont ++;
               if(cont == 10){
                       cout << endl << i << endl;
                       system("pause");
                       return 0; }
                       } 
               }
return 0;}
