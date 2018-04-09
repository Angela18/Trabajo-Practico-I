#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

void Copiar(int s[],int t[],int n);

int main(){
    int n,v;
    cout<<"Ingrese el tamaño de los arreglos: ";cin>>n;
    int s[n*2];
    int t[n];
    for(int i=0;i<n;i++){
        cout<<"Ingresa el valor "<<i+1<<" del arreglo S: ";cin>>v;
        s[i]=v;
        cout<<"Ingresa el valor de "<<i+1<<" del arreglo T: ";cin>>v;
        t[i]=v;
    }
    cout<<"La nueva cadena S es: "<<endl;
    Copiar(s,t,n);
    return 0;
}
void Copiar(int s[],int t[],int n){
    for(int i=0;i<n;i++){
        s[n+i]=t[i];
    }
    for(int i=0;i<n*2;i++)
    {
        cout<<s[i];
    }
}
