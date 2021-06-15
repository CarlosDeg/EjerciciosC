#include <iostream>//matriz de 5x4
#include<stdio.h>
using namespace std;
int main(){
int hack[5][4];
int i,j,veces;
int num;
for(i=0;i<4;i++) 
   {
	for(int j=0;j<3;j++) 
	{
		hack[i][j]=0;		
    }
  }
  for(i=0;i<4;i++) 
  {
  for(int j=0;j<3;j++)
  
  {cout << endl << "Posicion [ " << i << " ] [ " << j << " ]" << endl;
  cout<<"capturar numero";
  cin>>num;
if(i%2==0)
{

hack[i][j]=num;}}
cout<<"\n";}
for(int i=0;i<4;i++){
for(int j=0;j<3;j++) 
{cout<<hack[i][j]<<"        ";
}
cout<<"\n";}return 0;}
  
