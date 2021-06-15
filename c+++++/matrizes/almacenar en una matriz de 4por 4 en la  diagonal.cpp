//ejercicio en clase 4 por 4 capturae solo la diagonal
#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int hack[4][4];
int i,j;
int num;
int f,c;
   for(i=0;i<4;i++) //primer ciclo para llenar la matriz de ceros
   {
	for(int j=0;j<4;j++) 
	{
		hack[i][j]=0;}}
for(int i=0;i<4;i++) {//se ingresan datos en la matriz
	for(j=0;j<4;j++) {
		cout << endl << "Posicion [ " << i << " ] [ " << j << " ]" << endl;
		if(i+j==3) {
			cout<<"capturar numero";
			cin>>num;
			if(num%2==0)
			{hack[i][j]=num;
			
			}
}
}
}
for(i=0;i<4;i++) //se imprime la matriz
   {
	for(int j=0;j<4;j++) 
	{
	cout<<hack[i][j]<<"    ";}//se dan espacios entre las comillas para separar cada punto de la matriz
	cout<<endl;//se le da un salto de linea para que se formen filas
	
	}  return 0;}
