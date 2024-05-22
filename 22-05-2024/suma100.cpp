//un programa que sume los numeros del 1 al 100
#include<iostream>
using namespace std;
int main()
{
    int num[100];
    int suma=0;

    for(int i=0;i<100;i++)
    {
        num[i]=i+1;
    }
    for(int j=0;j<100;j++)
    {
        suma = suma + num[j];
    }
    cout<<suma<<"\n";
}