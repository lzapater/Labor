#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int binario=0,i=1,num;
    cout<<"Ingrese un numero: ";
    cin>>num;

    while(num!=0){
    binario+=(num%2)*i;
    num/=2;
    i*=10;
    }
    cout<<binario;

    int decimal=0,i=0,res,n;
    cout << "Ingrese un numero: ";
    cin >> n;
    while (n!=0)
    {
        res = n%10;
        n/= 10;
        decimal+= res*pow(2,i);
        ++i;
    }
    cout<<decimal;


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
