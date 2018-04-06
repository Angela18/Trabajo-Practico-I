#include<iostream>
#include<cstdlib>
#include<string.h>

using namespace std;

bool Palindro(char palabra[],int,int);

int main(){
    char palabra[20];
    int tam;
    bool pal;
    cout<<"Ingrese una palabra: "<<endl;
    cin.getline(palabra,50);
    tam=strlen(palabra);

    pal=Palindro(palabra,0,tam-1);

    if(pal==true)
        cout<<"La palabra es palindroma"<<endl;
    else
        cout<<"La palabra no es palindroma"<<endl;

    return 0;
}
bool Palindro(char palabra[],int pri,int ult){
    if(pri>=ult)
        return true;
    if(palabra[pri]==palabra[ult])
        Palindro(palabra,pri+1,ult-1);
    else
        return false;
}
