//solicitar al usuario seis notas, y sacar el promedio

#include <iostream>
using namespace std;
int main()
{
    string nombre;
    float notas[6];
    float promedio=0.00;

    cout<<"Porfavor ingrese su nombre:"<<"\n";
    cin>>nombre;

    for(int i=0;i<6;i++)
    {
        cout<<"Ingrese la nota "<<i+1<<":"<<"\n";
        cin>>notas[i];
    }
    
    promedio=(notas[0]+notas[1]+notas[2]+notas[3]+notas[4]+notas[5])/6;
    
    cout<<"El promedio que "<<nombre<<" obtuvo fue de: "<<promedio<<"\n";
    return 0;
}