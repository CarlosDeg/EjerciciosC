#include <iostream>
#include<stdio.h>
#include <string>
using namespace std;
int main(){//impresion de filas y columnas las de alrededor
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
if(i%3==0||j%3==0)
{matriza[i][j]='*';
}}}
for(int i=0;i<4;i++) {
for(int j=0;j<4;j++) {
	cout<<matriza[i][j]<<"  ";}
	cout<<endl;}
return 0;}
