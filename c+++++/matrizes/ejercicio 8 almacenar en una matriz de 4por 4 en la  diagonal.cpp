//ejercicio en clase 4 por 4 capturae solo la diagonal
#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int hack[4][4];
int i,j;
int num;
int f,c;
   for(i=0;i<4;i++) 
   {
	for(int j=0;j<4;j++) 
	{
		hack[i][j]=0;}}
for(int i=0;i<4;i++) {
	for(j=0;j<4;j++) {
		cout << endl << "Posicion [ " << i << " ] [ " << j << " ]" << endl;
		if(i+j==3) {
			cout<<"cpturar numero";
			cin>>num;
			if(num%2==0)
			{hack[i][j]=num;
			
			}
}
}
}
for(i=0;i<4;i++) 
   {
	for(int j=0;j<4;j++) 
	{
	cout<<hack[i][j]<<"    ";}
	cout<<endl;
	
	}  return 0;}
