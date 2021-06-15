#include <iostream>//llenar una matriz de 4 filas y dos columnas iniciando la celda en cero
#include<stdio.h>//los datos son capturados por el usuario
using namespace std;
int main(){
int dato[4][2];
int i,j;
int num,numero;
for(i=0;i<4;i++) //se llena la matriz de ceros
   {
	for(int j=0;j<2;j++) 
	{dato[i][j]=0;		
    }
  }
  for(i=0;i<4;i++) //se capturan datos para llenar la matriz
  {
  for(int j=0;j<2;j++)
  { cout << endl << "Posicion [ " << i << " ] [ " << j << " ]" << endl;
    cout<<"capturar numero"<<endl;
    cin>>num;
    dato[i][j]=num;
    }}
    
	for(i=0;i<4;i++) {// se imprime la matriz
  for(j=0;j<2;j++) {
  	cout<<dato[i][j]<<"    ";
} cout<<endl;
}return 0;
}

  
  
  
  
  
