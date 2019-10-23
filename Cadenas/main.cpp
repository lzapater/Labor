#include <iostream>

using namespace std;

int tam_it(char *cad){

    int tam=0;
    while(*cad++ !='\0'){
        tam++;
    }
    return tam;
}

int tam_rec(char *cad){

    if(*cad=='\0')
        return 0;
    else
        return 1+tam_rec(++cad);
}

void cambiar(char *a,char *b){

    char c=*a;
    *a=*b;
    *b=c;

}

void invert_it(char *cad){

    char *fin=cad+tam_it(cad)-1;
    while(cad<fin){
    char aux=*cad;
    *cad=*fin;
    *fin=aux;
    cad++;
    fin--;
    }
}

void invert_rec(char *cad,char *ultimo){

    if(cad==ultimo){
        return;
    }
    cambiar(cad,ultimo);
	invert_rec(++cad,--ultimo);
}

bool palindrome(char *cad, char *ultimo){

    int tam=tam_it(cad);

	for(int i=0;i<=tam/2;i++){
		if(*(cad+i)!=*(ultimo-i)){
            return false;
		}
}
    return true;

}

int main(){
   char cad[]="abcde";
   char *ult=cad+tam_it(cad)-1;
   invert_rec(cad,ult);
   cout<<cad;
}
