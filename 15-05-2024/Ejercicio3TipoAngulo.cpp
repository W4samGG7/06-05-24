#include <iostream>
using namespace std;
int main ()
{
    //Declaración de variables
    float angulo=0.00;

    //Solicitar variables
    cout<<"Programa para determinar el tipo de angulo"<<"\n";
    cout<<"Porfavor, ingrese el angulo que necesita evaluar: "<<"\n";
    cin>>angulo;

    //if anidados para angulo
    if(angulo>=1)
    {
        if(angulo<90)
        {
            cout<<"El angulo con valor de "<<angulo<<" es de tipo Agudo."<<"\n";
        }

        else if(angulo==90)
        {
            cout<<"El angulo con valor de "<<angulo<<" es de tipo Recto."<<"\n";
        }
        
        else      
        {
            cout<<"El angulo con valor de "<<angulo<<" es de tipo Obtuso."<<"\n";
        }
    } 

    else
    {
        cout<<"El valor ingresado no es valido"<<"\n";
    }

    return 0;
}