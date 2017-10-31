#include <iostream>
#include <fstream>

char** provisionarMatriz(int);

void liberarMatriz(char**,int);

//void printMatriz(char**,int);

//bool salir(char**,int,int,int);


using namespace std;

int main(){
	//Abrir el archivo
	ifstream file("laberinto.txt");
	
	int size = 0;
	char** labMatriz = NULL;

	//Si el archivo existe
	if(file.is_open()){
		//Leer el tamaño
		file>>size;

		//Inicializar matriz nxn
		labMatriz = provisionarMatriz(size);
		

		for(int i=0; i<size; i++)
			for(int j=0; j<size; j++)
				file>>labMatriz[i][j];

		file.close();
	}
	return 0;
}



void liberarMatriz(char** matriz, int size){
	for(int i=0; i<size; i++){
		 delete[]  matriz[i];
 		 matriz[i] = NULL;
	}
  	delete[]  matriz;
}


char** provisionarMatriz(int size){
	 char** retVal = new char*[size];
	 for(int i=0; i<size; i++){
		 retVal[i]= new char[size];
	 }
}

