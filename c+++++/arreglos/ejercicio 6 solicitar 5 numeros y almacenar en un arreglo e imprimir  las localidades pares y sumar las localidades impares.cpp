#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int num,i,par;
int dato [4];
int suma=0, promedio,total;
for(i=0;i<5;i++){
cout<<"capturar dato"<<i;
cin>>num;
dato[i]=num;}
for(i=0;i<5;i++)
{if(i%2==0)
{cout<<dato[i]<<endl;}
else{
	suma+=dato[i];
}	
}
cout<<"la suma de tus localidades impares es"<<endl;
cout<<suma;
return 0;
}
