#include <iostream>
using namespace std;
int main()
{
    int n=5;
    int impar[n];
    int q=0;
    int j=0;

    cout<<"Guardar solo numeros impares"<<"\n";

    for(int i=0;i<n;i++)
    {
        cout<<"Ingrese un numero:"<<"\n";
        cin>>q;

        while(q%2==0)
        {
            cout<<"Ingrese un numero:"<<"\n";
            cin>>q;
        }

        impar[i]=q;        
    }

    cout<<"Los numeros impares son:"<<"\n";
    for(int k=0; k<n;k++)
    {
        cout<<impar[k]<<"\n";
    }
    return 0;
}