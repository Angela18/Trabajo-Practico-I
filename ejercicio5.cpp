#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int tam_cad(char Cadena[]);
int tam_cad2(char *);
char Cadena[20];

int main(){

    cout<<"Introduce una frase: ";
    cin.getline(Cadena,20,'\n');
    cout<<"El tamaño de la cadena es: "<<tam_cad(Cadena)<<endl;
    cout<<"Introduce una frase: ";
    cin.getline(Cadena,20,'\n');
    cout<<"El tamaño de la cadena es: "<<tam_cad2(Cadena)<<endl;
    getch();
    return 0;
}
int tam_cad(char Cadena[]){
    int i=0;
    while(Cadena[i]!='\0'){
        i++;
    }
    return i;
}
int tam_cad2(char *Cadena){
    int cont=0;
    while(*Cadena!='\0'){
        cont++;
    }
    return cont;
}

