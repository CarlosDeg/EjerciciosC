#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int dato[3][3];
int valor2[3][3];
int matriz[3][3];
int i,k,l,j;
int multi=1;
int suma=0;
   for(int i=0;i<3;i++) //primer ciclo para llenar la matriz de ceros
   {
	  for(int j=0;j<3;j++) 
	  {
		dato[i][j]=0;
		valor2[i][j]=0;
	}
		              }
		
		for(int i=0;i<3;i++) 
          {
	       for(int j=0;j<3;j++)//SE CAPTURAN DATOS DE LA PRIMERA MATRIZ
	        {
            	cout<<"capturar dato";
              	cin>>	dato[i][j];
	}
    }
    for(int i=0;i<3;i++) //SE IMPRIME MATRIZ UNO
    {
	for(int j=0;j<3;j++)
	    {cout<<dato[i][j]<<"     ";
	
		}
		cout<<endl;
    }cout<<"SE LLENA MATRIZ 2";
    cout<<endl;
            for(int i=0;i<3;i++) //SE CAPTURA SEGUNDA MATRIZ
            {
	           for(int j=0;j<3;j++)
	           {if(i==j)
	           {
			   
            	cout<<"capturar dato";
              	cin>>valor2[i][j];}
              	
	}
    }
    for(int i=0;i<3;i++) //SE IMPRIME MATRIZ 2
   {
	for(int j=0;j<3;j++) 
	{
		cout<<valor2[i][j]<<"   ";}
		cout<<endl;}
		
		//se hace operacion de multiplicacion de matriz uno por la segunda matriz
		for(int i=0;i<3;i++) {
			for(int j=0;j<3;j++) {
				for(int k=0;k<3;k++) {
					for(int l=0;l<3;l++) {
						multi=dato[i][j]*valor2[k][l];
	                     suma=suma+multi;
	                      matriz[i][j]=suma;
                           }                            
						   }suma=0;
                           }
                           }
cout<<"tercera matriz";
cout<<endl;

		//se guarda el resultado en la tercera matriz
		for(int i=0;i<3;i++) 
   {
	       for(int j=0;j<3;j++) 
	{
		      cout<<matriz[i][j]<<"   ";}
		        cout<<endl;}
		
		return 0;}
