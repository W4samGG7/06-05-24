#include <iostream>
using namespace std;

int factorial (int num);
int main()
{
    int num;
    cout<<"Ingrese un numero entero: ";
    cin>>num;

    cout<<"El factorial de "<< num <<" es "<<factorial(num)<<"\n";

    return 0;
}

int factorial(int num)
{
    int res;
    if(num==0)
    {
        res=1;
    }
    else
    {
        res=1;
        for(int i=1;i<=num;i++)
        {
            res=res*i;
        }
    }
    return res;
}