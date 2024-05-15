#include <iostream>
using namespace std;
int main()
{
//declaración de variables
float angulo1=0.00; 
float angulo2=0.00;
float angulo3=0.00;

//Titulo
cout<<"Programa para calcular el tercer angulo de un triangulo"<<"\n";
//solicitar angulos
cout<<"Porfavor, ingrese el primer angulo:"<<"\n";
cin>>angulo1;
cout<<"Porfavor, ingrese el segundo angulo:"<<"\n";
cin>>angulo2;

//realización de calculo
if((angulo1<0 || angulo2<0)||(angulo1>180 || angulo2>180)){
    cout<<"Se ha ingresado un valor no valido"<<"\n";
}

else{
    angulo3=180-(angulo1 + angulo2);

//mostrar angulo 3
    cout<<"El valor del tercer angulo es de: "<<angulo3<<"\n";
}
return 0;
}