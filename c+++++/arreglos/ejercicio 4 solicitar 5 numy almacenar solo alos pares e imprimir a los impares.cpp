#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int num,i;
int dato [4];
int suma=0, total=0; 
float promedio;
for(i=0;i<5;i++) {
cout<<"capturar num";
cin>>num;
dato[i]=num;
}
for(i=0;i<5;i++)
{
if(dato[i]%2==0)
{cout<<dato[i];
	}	
else{suma+=dato[i];
total=total+1;
}	
}
promedio=suma/total;
cout<<"\n";
cout<<"tu promedio de impares es"<<endl;
cout<<promedio;
return 0;
}

