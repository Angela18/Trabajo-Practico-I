#include<iostream>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void sumar(int **,int **,int,int);
void mostrar(int **,int,int);

int **matriz1,**matriz2,filas,columnas;

int main(){
	pedirDatos();
	sumar(matriz1,matriz2,filas,columnas);
	mostrar(matriz1,filas,columnas);

	for(int i=0;i<filas;i++){
		delete[] matriz2[i];
	}
	delete[] matriz2;

	for(int i=0;i<filas;i++){
		delete[] matriz1[i];
	}
	delete[] matriz1;


	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	cout<<"Digite el numero de columnas: ";
	cin>>columnas;

	matriz1 = new int*[filas];
	for(int i=0;i<filas;i++){
		matriz1[i] = new int[columnas];
    }

	cout<<"\nDigitando los elementos de la primera matriz: \n";
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(matriz1+i)+j);
		}
	}


	matriz2 = new int*[filas];
	for(int i=0;i<filas;i++){
		matriz2[i] = new int[columnas];
	}

	cout<<"\nDigitando los elementos de la segunda matriz: \n";
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(matriz2+i)+j);
		}
	}
}

void sumar(int **matriz1,int **matriz2,int filas,int columnas){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			*(*(matriz1+i)+j) += *(*(matriz2+i)+j);
		}
	}
}

void mostrar(int **matriz1,int filas,int columnas){
	cout<<"\nLa suma de ambas matrices es: \n";
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<*(*(matriz1+i)+j)<<" ";
		}
		cout<<"\n";
	}
}
