#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

void Copiar(int s[],int t[]);

int main(){
    int s[10]={1,2,3,4,5};
    int t[5]={6,7,8,9,10};
    cout<<"S: ";
    for(int i=0;i<5;i++){
        cout<<s[i]<<" ";
    }
    Copiar(s,t);
    cout<<endl;
    cout<<"La nueva cadena S es: "<<endl;
    for(int i=0;i<10;i++){
        cout<<s[i]<<" ";
    }
    return 0;
}
void Copiar(int s[],int t[]){
    for(int i=5;i<10;i++){
        s[i]=t[i-5];
    }
}
