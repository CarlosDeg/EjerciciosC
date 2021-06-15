#include<iostream>
#include <stdio.h>
using namespace std;
int main()
 {
 int opcion;
 int i,a;
 int calificacion,materias;
 char alumno[20];
 int total,num,suma,nombre;
 float promedio;
 cout<<"capturar total de personas"<<endl;
 cin>>total;
i=0;
while(i<total){
{cout<<"nombre de el alumno "<<endl;
cin>>alumno;
i++;
}
a=1;
while(a<=5) 
{
	cout<<"calificacion de materia"<<endl;
	cin>>calificacion;
	suma=suma+calificacion;
	a++;
}
cout<<"el promedio es "<<endl;
promedio=suma/5;
cout<<promedio<<endl;
suma=0;
i++;}
	 
 	
}
	 


