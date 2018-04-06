#include<iostream>
#include<conio.h>

using namespace std;

int suma_iter(int num[],int);
int suma_recu(int num[],int);

int main(){
    int tam=5;
    int num[tam]={1,2,3,4,5};
    cout<<"La suma de los elementos de un arreglo es: "<<suma_iter(num,tam)<<endl;
    cout<<"La suma de los elementos de un arreglo es: "<<suma_recu(num,tam)<<endl;
    getch();
    return 0;
}
//Iteracion
int suma_iter(int num[],int tam){
    int suma=0;
    for(int i=0;i<tam;i++){
        suma+=num[i];
    }
    return suma;
}
//recursibidad
int suma_recu(int num[],int tam){
    int suma=0;
    if(tam<1){
        return 0;
    }
    else{
        suma=num[tam-1]+suma_recu(num,tam-1);
    }
    return suma;
}
