#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int total;
int i,suma,num;
cout<<"numeros que desea sumar ";
cin>>total;
for(i=0;i<total;i++)
	{
	cout<<"captura un numero";
	cin>>num;
	if(num%2==0){
	suma=suma+num;
	}
}
	cout<<"tu suma de los pares es de ";
	cout<<suma;
	
	

	return 0;
}
