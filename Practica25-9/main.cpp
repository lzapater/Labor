#include <iostream>

using namespace std;

void imprimir(int arr[],int tam){
        for(int i=0;i<tam;i++){
            cout<<arr[i]<<endl;
        }
}

int sumait(int arr[],int tam){
    int suma=0;
    for(int i=0;i<tam;i++){
        suma+=arr[i];
    }
    return suma;
}

int sumarec(int arr[],int tam){

    if(tam==1){
        return arr[0];
    }
    else
        return arr[tam-1]+sumarec(arr,tam-1);

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

void burbuja(int arr[],int tam){

    int i,j;
    for (i=0;i<tam-1;i++){
        for(j=0;j<tam-i-1;j++){
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void insertion(int arr[],int tam){

    int pivot,j;
    for (int i=1;i<tam; i++){
        pivot=arr[i];
        j=i-1;

        while (j>=0 && arr[j]>pivot){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=pivot;
    }
}

int partition(int *a,int start,int end)
{
    int pivot=a[end];
    //P-index indicates the pivot value index

    int P_index=start;
    int i,t; //t is temporary variable

    //Here we will check if array value is
    //less than pivot
    //then we will place it at left side
    //by swapping

    for(i=start;i<end;i++)
    {
    	if(a[i]<=pivot)
        {
            t=a[i];
            a[i]=a[P_index];
            a[P_index]=t;
            P_index++;
        }
     }
     //Now exchanging value of
     //pivot and P-index
      t=a[end];
      a[end]=a[P_index];
      a[P_index]=t;

     //at last returning the pivot value index
     return P_index;
 }
 void Quicksort(int *a,int start,int end)
 {
    if(start<end)
    {
         int P_index=partition(a,start,end);
             Quicksort(a,start,P_index-1);
             Quicksort(a,P_index+1,end);
    }
}
int main(){
        int x[6]={10,1,5,7,13,14};
        Quicksort(x,0,6);
        imprimir(x,6);
}
