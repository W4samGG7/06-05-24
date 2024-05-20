#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    //declaracion de variables
    int a;
    int b;
    //titulo
    cout<<"Piedra, Papel o Tijera"<<"\n";
    for(int i=0;i<3;i++)
    {
    //menu eleccion jugador
    cout<<"Piedra es igual a 1"<<"\n";
    cout<<"Papel es igual a 2"<<"\n";
    cout<<"Tijera es igual a 3"<<"\n";
    cout<<"Su eleccion es: "<<"\n";
    cin>>a;
    //randomizar maquina
    for(int e=0; e<1;e++)
    {
        b=rand()%4;
        cout<<b<<" es la eleccion de la maquina."<<"\n";
    }
    //casos del juego
    if(a==b)
    {
        cout<<"Es un empate"<<"\n";
    }
    else if((a==1 && b==3)||(a==2 && b==1)||(a==3 && b==2))
    {
        cout<<"Usted ha ganado"<<"\n";
    }
    else
    {
        cout<<"La maquina ha ganado"<<"\n";
    }
    }
    return 0;
}