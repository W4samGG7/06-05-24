#include <iostream>
using namespace std;
int main()
{
 //declaración de variables
 int edad=0;
 
 //Solicitar variables
 cout<<"Programa para determinar si es mayor de edad o no"<<"\n";
 cout<<"Porfavor, ingrese la edad a verificar: "<<"\n";
 cin>>edad;

 //Determinar rango de edad
 if(edad>=1)
 {
    
    if(edad>=18)
    {
        cout<<"Es mayor de edad"<<"\n";
    }
    else
    {
        cout<<"Es menor de edad"<<"\n";
    }

 }
 else
 {
    cout<<"La edad ingresada no es valida"<<"\n";
 }

 return 0;
}