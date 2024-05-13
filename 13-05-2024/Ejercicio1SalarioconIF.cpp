#include<iostream>
using namespace std;
int main()
{

//declaración de variables 

int base=160;
string nombre;
double horas;
float extras,normales;
float pago,impuestos;

//solicitar variables
cout<<"Ingrese su nombre: "<<"\n";
cin>>nombre;
cout<<"Ingrese las horas trabajadas: "<<"\n";
cin>>horas;

//determinar horas extras 

if(horas>160){
extras= horas-base;
normales=horas-extras;}
else{
normales=horas;
extras=0;}

//if para pago de extras
if(horas>0 && horas<=160){
pago=normales*10;}
else{
pago=(normales*10)+(extras*15);}

//if para impuestos

if(pago<=2000){
impuestos=pago;}
else if(pago>2000 && pago<=2200){
impuestos=pago-(pago*0.20);}
else{
impuestos=pago-(pago*0.30);}

//Mostrar nombre y pago neto

cout<<"Estimado "<<nombre<<" su salario neto es $"<<impuestos;

return 0;
}