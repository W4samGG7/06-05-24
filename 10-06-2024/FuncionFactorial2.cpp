#include <iostream>
using namespace std;
int factorial(int num)
{
    int res;
    if(num==0)
    {
        res=1;
    }
    else
    {  
        res=num*factorial(num-1);
    }
    return res;
}

int main()
{
    int num;
    cout<<"Ingrese un numero entero: ";
    cin>>num;

    cout<<"El factorial de "<< num <<" es "<<factorial(num)<<"\n";

    return 0;
}