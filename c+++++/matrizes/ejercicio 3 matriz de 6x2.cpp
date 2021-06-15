//matriz de 6x2
#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int hack[6][2];
int i,j;
int num;
int f,c;
   for(i=0;i<6;i++) //almacenando datos en la matriz
   {
	for(int j=0;j<2;j++) 
	{
		hack[i][j]=0;}}
	for(i=0;i<6;i++) {
		if(i%2==1)
		{ }
			cout << endl << "Posicion [ " << i << " ] [ " << j << " ]" << endl;
			for(j=0;j<2;j++)
			 {if(j%2==1)
			 
			 {
			 
			 cout<<"capturarnum";
			 cin>>num;
			 	hack[i][j]=num;
			 }
   }
   }
    for(int i=0;i<6;i++)   
   {
	for(int j=0;j<2;j++) 
	{
		cout<<hack[i][j]<<"   ";
	}cout<<endl;
		} return 0;
} 




