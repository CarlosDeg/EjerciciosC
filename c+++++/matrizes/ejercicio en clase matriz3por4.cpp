#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int hack[3][4];
int dato[3][4];
int i,j;
int num,numero;
for(i=0;i<3;i++) 
   {
	for(int j=0;j<4;j++) 
	{dato[i][j]=0;
		hack[i][j]=0;		
    }
  }
  for(i=0;i<3;i++) 
  {
  for(int j=0;j<4;j++)
  { cout << endl << "Posicion [ " << i << " ] [ " << j << " ]" << endl;
    cout<<"capturar numero"<<endl;
    cin>>num;
    hack[i][j]=num;
    }}
	cout<<"pedir num";
	cin>>numero;
	for(i=0;i<3;i++) 
   {
	for(int j=0;j<4;j++) 
	{
		dato[i][j]=numero*hack[i][j];
    }	
    }
    
	for(i=0;i<3;i++) {
  for(j=0;j<4;j++) {
  	cout<<dato[i][j]<<endl;

}}return 0;
}

  
  
  
  
  
