#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int valores [3][3];
	int numero;
//	se llena la matriz de 0 y se imprime.
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		valores[i][j]=0;
	}
}
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<valores[i][j];
	}
	cout<<"\n";
}

//se captura un numero y muestra los numeros de la matriz en diagonal...  valores [i] [j] igual a numero para mostrarla.
//if(i==j) sirve para pedir datos en la diagonal....
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		if(i==j){
		cout<<"capturar numero: ";
		cin>>numero;
		valores [i][j]=numero;
			
		}
	}
}
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<valores[i][j];
	}
	cout<<"\n";
}


return 0;
}
