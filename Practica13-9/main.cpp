#include <iostream>

using namespace std;

int mult(int n){

    int rpta=0;
    for(int i=0;i<n;i++){
        if(i%3==0 || i%5==0){
            rpta+=i;
        }
    }
    return rpta;
}

int invert(int n){

    int inverso=0;
    while (n>0){
        inverso= inverso*10 + (n%10);
        n/=10;
    }
    return inverso;

}

bool palindrome(int n){

    int invertido=invert(n);

    if (n==invertido)
        return true;
    else
        return false;
}

int power(int b, int e){

    if (e==1)
        return b;
    else
        return b*power(b,e-1);
}

int fibit(int n){

    int c=1,f_0=0,f_1=1,rpta=0;

    while(c<n){
        rpta=f_0+f_1;
        f_0=f_1;
        f_1=rpta;
        c++;
    }
    return rpta;
}

int fibrec(int n){

    if(n<2)
        return n;
    else
        return fibrec(n-2) + fibrec(n-1);
}

double fact(double n){

    if(n==0)
        return 1;
    else
        return n*fact(n-1);


}

int main()
{
    //cout<<mult(1000000);
    //cout<<invert(1324);
    //cout<<palindrome(123);
    //cout<<power(4,3);
    //cout<<fibit(45);
    //cout<<fibrec(45);
    //cout<<fact(3);

}
