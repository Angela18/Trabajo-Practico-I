#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

void concatenar(char destino[],char fuente1[],char fuente2[]);

int main(){
    char cad1[15],cad2[15],cad3[30];
    cout<<"Ingrese una palabra: ";
    cin>>cad1;
    cout<<"Ingrese una palabra: ";
    cin>>cad2;
    concatenar(cad3,cad1,cad2);
    cout<<"La palabra completa es: "<<cad3<<endl;


    getch();
    return 0;
}
void concatenar(char destino[],char fuente1[],char fuente2[])
{
    int i=0,j=0;
    while(fuente1[i]!='\0')
    {
        destino[i]=fuente1[i];
        i++;
    }
    destino[i]=' ';
    i++;
    while(fuente2[j]!='\0'){
        destino[i+j]=fuente2[j];
        j++;
    }
    destino[i+j]='\0';
}
