#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
	string nombre;
int tamano;
int i;
cout<<"capturar nombre";
cin>>nombre;
tamano=nombre.length();
cout<<tamano;
for(i=0;i<=tamano;i++)
{
	if(i%2==0)
	{cout<<nombre [i];	}
		
	}	
	return 0;	
}
