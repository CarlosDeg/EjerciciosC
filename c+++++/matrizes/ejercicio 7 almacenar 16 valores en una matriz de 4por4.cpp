#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int hack[4][4];
int i,j,;
float promedio;
int num,numero,suma=0;
for(i=0;i<4;i++) 
   {
	for(int j=0;j<4;j++) 
	{
		hack[i][j]=0;		
    }
  }
  for(i=0;i<4;i++) 
  {
  for(int j=0;j<4;j++)
  { cout << endl << "Posicion [ " << i << " ] [ " << j << " ]" << endl;
    cout<<"capturar numero"<<endl;
    cin>>num;
    hack[i][j]=num;
    }
}
	
	for(i=0;i<4;i++) 
   {
	for(int j=0;j<4;j++) 
	{
	suma=suma+hack[i][j];
	
    }	
    }
    promedio=suma/16;
cout<<"tu suma es";
  	cout<<suma<<endl;
  	cout<<"eel promedio es";
  	cout<<promedio<<endl;
return 0;
}

  
  
  
  
  
