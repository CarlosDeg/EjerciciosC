#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int dato[3][3];
int matriz[3][3];
int i,j,o,p,r;
int array[3];
int num,numero;
int multi=1,suma=0;
   for(int i=0;i<3;i++) 
   {
	for(int j=0;j<3;j++) 
	{
		dato[i][j]=0;
	
	}
		}
for(int i=0;i<3;i++) 
    {
	for(int j=0;j<3;j++)
	    {
	cout<<"capturar dato";
	cin>>	dato[i][j];

	
		}
    }
    for(int i=0;i<3;i++) 
    {
	for(int j=0;j<3;j++)
	    {cout<<dato[i][j]<<"     ";
	
		}
		cout<<endl;
    }
    cout<<"vector";
    cout<<endl;
for(int r=0;r<3;r++) {
cout<<"capturar dato";
cin>>array[r];

}
for(int r=0;r<3;r++) {
cout<<array[r]<<"   ";

}cout<<endl;
 for(int i=0;i<3;i++) 
    {
	for(int j=0;j<3;j++){
	
	for(int r=0;r<3;r++)
	{multi=dato[i][j]*array[r];
	suma=suma+multi;
	matriz[i][j]=suma;
	
	}suma=0;}}
cout<<"tercera matriz";
cout<<endl;

for(int i=0;i<3;i++) 
    {
	for(int j=0;j<3;j++)
	    {
cout<<matriz[i][j]<<"   ";}
cout<<endl;}

	return 0;}
