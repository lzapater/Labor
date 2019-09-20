#include <iostream>

using namespace std;

int main()
{
    int n,rpta;
    cout<<"Ingrese un numero: ";
    cin>>n;

    if(n==1)
        cout<<"El numero "<<n<<" es potencia de 2";
    rpta=n;
    while(n%2==0){
        n=n/2.0;
    }
    if (n==1)
        cout<<"El numero "<<rpta<<" es potencia de 2";
    else
        cout<<"El numero "<<rpta<<" no es potencia de 2";

    int a,b,c,d,e,bin,rpta;
    cout<<"Ingrese un numero: ";
    cin>>bin;

    a=bin/10000;
    b=bin/1000;
    b=b%10;
    c=bin%1000;
    c=c/100;
    d=bin%100;
    d=d/10;
    e=bin%10;

    a*=16;
    b*=8;
    c*=4;
    d*=2;
    e*=1;

    rpta=a+b+c+d+e;
    cout<<rpta;

}
