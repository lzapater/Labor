#include <iostream>

using namespace std;

void imprimirDigitos (int num){

    int a,b,c,d,e;

    a=num/10000;
    b=num/1000;
    b%=10;
    c=num%1000;
    c/=100;
    d=num%100;
    d/=10;
    e=num%10;

    cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<d<<'\t'<<e;
}

int contarDigitos(int num){

    int c=0;
    while(num!=0){
        num/=10;
        c++;
    }
    return c;
    }

bool esPalindrome (int num){

    int a,b,c,d,e;

    a=num/10000;
    b=num/1000;
    b%=10;
    c=num%1000;
    c/=100;
    d=num%100;
    d/=10;
    e=num%10;

    return (a==e && b==d);
}

int Fibonacci (int num){

    int f_0=0,f_1=1,c=0,rpta;

    if (num==0 || num==1)
        return 1;
    else{
    while(++c<num){
        rpta=f_0+f_1;
        f_0=f_1;
        f_1=rpta;

    }
        return rpta;
    }
}

bool esNumero(char n){

    int conv=static_cast<int>(n);

    if (conv>= 48 && conv<=57)
        return true;
    else
        return false;
  }

bool esLetra(char l){

    int conv=static_cast<int>(l);

    if ((conv>=65  && conv<=90) || (conv>=97  && conv<=122))
        return true;
    else
        return false;
  }
char convertirMay(char l){

    int conv=static_cast<int>(l);

    if (conv>=65  && conv<=90)
        conv+=32;
    char aux=static_cast<char>(conv);

    return conv;

}

char convertirMen(char l){

    int conv=static_cast<int>(l);

    if (conv>=97  && conv<=122)
        conv-=32;
    char aux=static_cast<char>(conv);

    return conv;

}

int main()
{
    int n;
    cout<<"Ingrese una opcion: ";
    cin>>n;

    while(n<=8){
        if (n==1){
            imprimirDigitos(12345);
        break;
        }

        if (n==1){
            imprimirDigitos(12345);
        break;
        }

        if (n==2){
            int n;
            cout<<"Ingrese un numero: ";
            cin>>n;
            cout<<"El numero tiene "<<contarDigitos(n)<<" digitos";
        break;
        }

        if (n==3){
            cout<<esPalindrome(12321);
        break;
        }

        if (n==4){
            cout<<Fibonacci(7);
        break;
        }

        if (n==5){
            cout<<esNumero('2');
        break;
        }

        if (n==6){
            cout<<esLetra('A');
        break;
        }

        if (n==7){
            cout<<convertirMay('C');
        break;
        }

        if (n==8){
            cout<<convertirMen('c');
        break;
        }
    }
}
