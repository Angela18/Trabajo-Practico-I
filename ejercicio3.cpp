#include<iostream>
#include<conio.h>

using namespace std;

void InsertionSort(int num[],int);
void MergeSort(int num[],int num_aux[],int,int);
void QuickSort(int num[],int,int,int);

int main(){
    int pri,ult,tam=5;
    int num[]={4,2,3,1,5};
    int num_aux[10];
    cout<<"Orden por Insertion Sort: "<<endl;
    InsertionSort(num,tam);
    for(int i=0;i<tam;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;

    cout<<"Orden por Merge Sort: "<<endl;
    MergeSort(num,num_aux,pri,ult);
    for(int i=0;i<tam;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    cout<<"Orden por Quick Sort: "<<endl;
    QuickSort(num,tam,0,tam-1);
    for(int i=0;i<tam;i++){
        cout<<num[i]<<" ";
    }

    getch();
    return 0;
}
void InsertionSort(int num[],int tam){
    int i,pos,aux;

    for(i=1;i<tam;i++){
        pos=i;
        aux=num[i];

        while((pos>0)&&(num[pos-1]>aux)){
            num[pos]=num[pos-1];
            pos--;
        }
        num[pos]=aux;
    }
}
void MergeSort(int num[],int num_aux[],int pri,int ult){
    int i,pri2,aux,tam,mit;
    mit=(pri+ult)/2;
    pri2=mit+1;
    aux=pri;
    tam=ult-pri+1;

    while((pri<=pri2)&&(mit<=ult)){
        if(num[pri]<=num[mit]){
            num_aux[aux]=num[pri];
            aux=aux+1;
            pri=pri+1;
        }
        else{
            num_aux[aux]=num[mit];
            aux=aux+1;
            mit=mit+1;
        }
    }
    while(pri<=pri2){
        num_aux[aux]=num[pri];
        pri=pri+1;
        aux=aux+1;
    }
    while(mit<=ult){
        num_aux[aux]=num[mit];
        mit=mit+1;
        aux=aux+1;
    }
    for(i=0;i<=tam;i++){
        num[ult]=num_aux[ult];
        ult=ult-1;
    }
}
void QuickSort(int num[],int tam,int pri, int ult){
    int pivote,i,j,central;
    central=(pri+ult)/2;
    pivote=num[central];
    i=pri;
    j=ult;
    do{
        while(num[i]<pivote) i++;
        while(num[j]>pivote) j--;
        if(i<=j){
            int aux;
            aux=num[i];
            num[i]=num[j];
            num[j]=aux;
            i++;
            j--;
        }
    }while(i<=j);
    if(pri<j)
        QuickSort(num,tam,pri,j);
    if(i<ult)
        QuickSort(num,tam,i,ult);

}

