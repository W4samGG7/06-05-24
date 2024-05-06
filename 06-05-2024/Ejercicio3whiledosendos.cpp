#include <iostream>
using namespace std;
int main(){

int i, n;

cout << "ingrese un numero entero positivo n = ";
cin >> n;
i = 0;

    if(n>0)
    {

     while(i<n)
     {
        cout << i << "\n";
        i = i + 2;
     }
    }
    else
    {
        cout << "Error, n debe ser postivo";
    }
}