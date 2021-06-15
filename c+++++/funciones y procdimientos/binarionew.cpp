#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int dividir(int valor);
int leer();
int main()
{
	int i; 
	int resultado[30];
	int res;
	int valor=leer ();
	int bandera=0;
for(int i=29;i>=0;i--) {resultado[i]=0;
}
	i=0;

	while((valor%2!=0)||(bandera=0))
	{
		res=dividir(valor);
		valor=valor/2;
		resultado[i]=res;
		i++;
		if (valor==0)
		{
			bandera=1;
		}
	
	}
	for(int i=29;i>=0;i--) {

	cout<<resultado[i];}
	return 0;
}

int dividir(int valor)
{
	int num;
	num=valor/2;
	return num;
}



int leer()
{
	int num;
	cout<<"numero";
	cin>>num;
	return num;
}
	
