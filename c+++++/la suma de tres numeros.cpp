#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int num1,num2,num3;
	int suma;
	cout<<"escribe el primer numero"<<endl;
	cin>>num1;
	cout<<"escribe el segundo numero"<<endl;
	cin>>num2;
	cout<<"escribe el tercer numero"<<endl;
	cin>>num3;
	suma=num1+num2;
	if(suma==num3){
		cout<<"la suma de tus dos numeros es igual al numero 3"<<endl;
	}
	else{
		
		cout<<"la suma de tus numeros no es igual a tu tercer numero"<<endl;
	}

return 0;
}
