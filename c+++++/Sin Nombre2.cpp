#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
char nombre [20];
int opc,novalida,color,rojo,azul;
cout<< "Elije una opcion: "<<endl;
        cout << "\t1 .- LUNES"<< endl;
        cout << "\t2 .- MARTES" << endl;
        cout << "\t3 .- MIERCOLES"<< endl;
        cout << "\t4 .- JUEVES"<< endl;
        cout << "\t5 .- VIERNES"<< endl;
        cout << "\t6 .- EXIT"<<endl;
        cin>>opc;
        switch(opc)
        {case 1:
			cout<<"capturar color"<<endl;
        	cin>>color;
        	if(color==rojo)
        	{
			cout<<"usted gano 50 pesos";}
			else{
			
				if(color==azul)
        	{
			cout<<"usted debe 20 pesos"<<endl;
			}}}
			
			cin>>opc;return 0;
    }
