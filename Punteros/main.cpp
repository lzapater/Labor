#include <iostream>

using namespace std;

void imprimir(int *arr,int tam){

        int *ptr;
        ptr=arr;
        for(int i=0;i<tam;i++){
            cout<<*(ptr)<<endl;
            ptr++;
        }
}

int sumait(int *arr,int tam){

    int *ptr;
    ptr=arr;
    int suma=0;
    for(int i=0;i<tam;i++){
        suma+=*ptr;
        ptr++;
    }
    return suma;
}

int sumarec(int *arr,int tam){

    int *ptr;
    ptr=arr;
    if(tam==1){
        return *ptr;
    }
    else
        return ptr[tam-1]+sumarec(ptr,tam-1);

}

void invert(int arr[],int tam){

    int aux;
    for(int i=0;i<tam/2;i++){
            aux=arr[i];
            arr[i]=arr[tam-1-i];
            arr[tam-1-i]=aux;
    }
}

int invertr(int arr[], int tam){

    if (tam==1)
        return arr[0];

    else{
    int aux = arr[0];
    arr[0] = arr[tam-1];
    arr[--tam] = aux;

    return invertr(arr +1, tam-1);
    }
}

void insertion(int arr[],int tam){

    int lugar,j;
    for (int i=1;i<tam; i++){
        lugar=arr[i];
        j=i-1;

        while (j>=0 && arr[j]>lugar){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=lugar;
    }
}
void burbuja(int* arr, int tam) {

	int* ptr;
	ptr = arr;
	for (int i = 0; i < tam - 1; i++) {
		for (int j = 0; j < tam - i - 1; ptr++) {
			if (*ptr > *(ptr+1))
			{
				int temp = *ptr;
				*ptr = *(ptr+1);
				*(ptr + 1) = temp;
			}
		}
	}
}
int main(){
        int x[6]={10,14,7,4,3,5};
        //cout<<sumait(x,6);
        //cout<<sumarec(x,6);
        insertion(x,6);
        imprimir(x,6);
}
