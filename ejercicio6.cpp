#include<iostream>
#include<string.h>

using namespace std;

void Copiar(char s[],char t[]);

int main(){
    char s[4]={'h','o','l','a'};
    char t[4]={'c','a','s','a'};
    cout<<"La nueva cadena S es: "<<endl;
    Copiar(s,t);
    return 0;
}
void Copiar(char s[],char t[]){
    for(int i=0;i<4;i++){
        s[i]=t[i];
    }
    for(int i=0;i<4;i++)
    {
        cout<<s[i];
    }
}
