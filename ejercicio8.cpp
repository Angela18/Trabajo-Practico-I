#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void Intercambiar(int list1[],int list2[],int);

int main(){
    int tam=5;
    int list1[]={1,-2,3,-4,5};
    int list2[]={-1,2,-3,4,-5};

    Intercambiar(list1,list2,tam);
    cout<<"La nueva lista 1 es: "<<endl;
    for(int i=0;i<tam;i++){
        cout<<list2[i]<<" ";
    }
    cout<<endl;
    cout<<"La nueva lista 2 es: "<<endl;
    for(int i=0;i<tam;i++){
        cout<<list1[i]<<" ";
    }

    return 0;
}
void Intercambiar(int list1[],int list2[],int tam){
    int aux;
    for(int i=0;i<tam;i++){
        aux=list1[i];
        list1[i]=list2[i];
        list2[i]=aux;
    }
}
