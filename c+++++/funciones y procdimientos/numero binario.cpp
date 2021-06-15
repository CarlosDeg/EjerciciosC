#include<iostream>
#include<stdio.h>

void continuar ();
{


int d;
long b, p,c;
int continuar=1;
while(continuar==1)
{
cout<<"ingrese el numero en binario\n numero en binario:";
cin>>b;
c=1;
d=0;
	while(b>0)
	{
		p=0;
		p=c*(b%10);
		d+=p;
		c*=2;
		b/=10;
	}
cout<<"\n numero en decimal:"<<d;

cout<<"desea continuar?\n"; 
cin>> continuar;
}
int j= 1235%2;
cout<<j;
}
