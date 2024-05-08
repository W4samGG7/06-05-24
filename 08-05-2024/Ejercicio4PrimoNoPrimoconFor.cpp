#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ingrese un valor entero n: ";
    cin>>n;
    int primo=1;//hipotesis

    for(int i=n-1; i>=2; i=i-1)
    {
        int modulo=n%i;
        if(modulo==0)
        {
            cout<<n<< " no es primo."<<"\n";
            primo=0;
            break;
        }
    }
    if(primo)
    {
        cout<<n<<" es primo"<<"\n";
    }
 return 0;
}