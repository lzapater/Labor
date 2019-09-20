#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"Ingrese un numero:";
    cin>>n1;
    cout<<"Ingrese un numero:";
    cin>>n2;
    cout<<"Ingrese un numero:";
    cin>>n3;

    if (n1<n2 && n2<n3)
        cout<<n1<<" es el menor numero";
    else{
        if(n2<n3)
            cout<<n2<<" es el menor numero";
        else
            cout<<n3<<" es el menor numero";
    }


}
