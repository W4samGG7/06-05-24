#include <iostream>
using namespace std;
int main()
{
    int n=0;
    int numeros[n];
    int par [n];
    int j=0;

    cout<<"Evaluar multiples numeros para saber si son pares"<<"\n";
    cout<<"Cual es la cantidad de datos que quiere ingresar:"<<"\n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Ingrese el numero "<<i+1<<":"<<"\n";
        cin>>numeros[i];

        if(numeros[i] % 2==0)
        {
            par[j]=numeros[i];
            j=j+1;
        }
    }   
    cout<<"Los numeros ingresados son:"<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<numeros[i]<<"\n";
    }
    cout<<"Los numeros pares:"<<"\n";
    for(int k=0; k<j;k++)
    {
        cout<<par[k]<<"\n";
    }

    return 0;
}