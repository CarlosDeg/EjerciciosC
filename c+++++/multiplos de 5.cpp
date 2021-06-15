#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int total;
int veces;
int i=1,suma,multi=1,num,numero;
cout<<"capturar numero total"<<endl;
cin>>total;
for (i=1;i<=total;i++)
{veces=total-i;
if(veces<0)

cout<<"capturar num";
cin>>numero;
numero=numero%5;}
if(num==0){
suma=suma+numero;
i++;
cout<<"la suma de los multiplos de 5 es";
cout<<suma;
}

else
{
	multi=multi*numero;
	i++;
	cout<<"la multiplicacion de los no multiplos de 5 es";
	cout<<multi;
}
	
	return 0;
}
