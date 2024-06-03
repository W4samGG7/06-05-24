#include<iostream>
using namespace std;

int suma(int entero1, int entero2){
int resultado=0;
resultado=(entero1+entero2);
return resultado;
}

int resta(int entero1, int entero2){
int resultado=0;
resultado=(entero1-entero2);
return resultado;
}

int multiplicacion(int entero1, int entero2){
int resultado=0;
resultado=(entero1*entero2);
return resultado;
}

double division(double entero1, double entero2){
double resultado=0;
resultado=(entero1/entero2);
return resultado;
}

double media(double num1, double num2){
double resultado=0;
resultado=(num1+num2)/2;
return resultado;
}

int main()
{
    int n1=0, n2=0, respuesta=0, respuesta2=0, respuesta3=0;
    double n3=0, n4=0,respuesta4=0, respuesta5=0;
    n1=8;
    n2=6;
    n3=8;
    n4=6;
    
    respuesta=suma(n1,n2);
    
    cout<<"El resultado de la suma de dos numeros es: "<<respuesta<<"\n";

    respuesta2=resta(n1,n2);

    cout<<"El resultado de la resta de dos numeros es: "<<respuesta2<<"\n";

    respuesta3=multiplicacion(n1,n2);

    cout<<"El resultado de la multiplicacion de dos numeros es: "<<respuesta3<<"\n";

    respuesta4=division(n3,n4);

    cout<<"El resultado de la division de dos numeros es: "<<respuesta4<<"\n";

    respuesta5=media(n3,n4);

    cout<<"El resultado de la media de dos numeros es: "<<respuesta5<<"\n";
    return 0;
}