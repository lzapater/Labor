#include <iostream>

using namespace std;

int main()
{
/*  int n1;
    cout<<"Ingrese un numero:";
    cin>>n1;

    cout<<(n1*(n1+1))/2;
*/


/*  int n2,rpta=0;
    cout<<"Ingrese un numero:";
    cin>>n2;

    while(n2>0){
        rpta+=n2;
        n2--;
    }
    cout<<rpta;
*/

    int n3,rpta=0;
    cout<<"Ingrese un numero:";
    cin>>n3;

    while(--n3>0){
        if (n3%3==0 || n3%5==0)
            rpta+=n3;
    }
    cout<<rpta;
}
