#include<iostream>
#include<stdio.h>
using namespace std;
int leer (int var)
{
	int valor;
	cout<<"valor"<<var;
	cin>>valor;
	return valor;
}
int suma(int total)
{
	int numero;
	int suma=0;
	for(int i=0;i<total;i++)
	{
		numero=leer(i);
		suma=numero+suma;
	}
	return suma;
}
float promedio(int total, int suma)
{
	float promedio;
	promedio=suma/total;
	return promedio;
}
int multiplicacion(int total)
{
	int multi=1;
	int numero;
	for(int i=0;i<total;i++)
	{
		numero=leer(i);
		multi=numero*multi;
	}
	return multi;
}
int menu()
{
	int opc;
	cout<<"1-suma,  2-promedio,  3-multiplicacion"<<"    ";
	cin>>opc;
	return opc;
}
int main()
{
	int opc;
	int total;
	int suma1;
	opc=menu();
	cout<<"total de numeros"<<"   ";
	cin>>total;
	if(opc==1)
	{
		cout<<"la suma es"<<suma(total)<<"   ";
	}
	if(opc==2)
	{
		suma1=suma(total);
		cout<<"el promedio es"<<promedio(total,suma1)<<"   ";
	}
	if(opc=3)
	{
		cout<<"la multiplicacion"<<multiplicacion(total)<<"  ";
	}
	return 0;
}
