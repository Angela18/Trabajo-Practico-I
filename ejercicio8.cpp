#include<iostream>
#include<stdlib.h>

using namespace std;

void Intercambiar(char list1[],char list2[],int);

int main(){
    int tam=5;
    char list1[tam]={'h','o','l','a'};
    char list2[tam]={'m','a','m','a'};
    cout<<"Lista 1: ";
    for(int i=0;i<tam;i++){
        cout<<list1[i];
    }
    cout<<endl;
    cout<<"Lista 2: ";
    for(int i=0;i<tam;i++){
        cout<<list2[i];
    }
    cout<<endl;
    Intercambiar(list1,list2,tam);
    cout<<"La nueva lista 1 es: "<<endl;
    for(int i=0;i<tam;i++){
        cout<<list1[i];
    }
    cout<<endl;
    cout<<"La nueva lista 2 es: "<<endl;
    for(int i=0;i<tam;i++){
        cout<<list2[i];
    }

    return 0;
}
void Intercambiar(char list1[],char list2[],int tam){
    int aux;
    for(int i=0;i<tam;i++){
        aux=list1[i];
        list1[i]=list2[i];
        list2[i]=aux;
    }
}
