#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int i = 0;

    cout << "ingrese un numero entero positivo: ";
    cin >> n;

    while (i<=10)
    {
        cout << i <<"x"<<n<<"=" << i * n<< "\n";
        i=i+1;
        

    }
return 0;
}