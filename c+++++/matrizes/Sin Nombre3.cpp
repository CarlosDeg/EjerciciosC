#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int matriza[4][4];
int i,j;
int num;//i para filas j para columnas
for(int i=0;i<4;i++) {
for(int j=0;j<4;j++) {
	matriza[i][j]=0;
}	
}
for(int i=0;i<4;i++) {
	
for(int j=0;j<4;j++) 
{
if(j%3==0)
{matriza[i][j]=1;
}}}
for(int i=0;i<4;i++) {
for(int j=0;j<4;j++) {
	cout<<matriza[i][j]<<"  ";}
	cout<<endl;}
return 0;}
