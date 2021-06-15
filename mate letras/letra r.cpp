#include <iostream>//impresion de dos columnas
#include<stdio.h>
#include <string>
using namespace std;
int main(){
char matriza[9][9];


int num;//i para filas j para columnas

for(int i=0;i<9;i++) {
for(int j=0;j<9;j++) {

	matriza[i][j]=0;
}	
}
for(int i=0;i<9;i++) {
for(int j=0;j<9;j++) 
{
if(j==0||i==0)
{matriza[i][j]='*';;}
if(j==8&&i==8/8)//corregir esta linea
{matriza[i][j]='*';;
}
if(i==2)
{matriza[i][j]='*';}


if(j==i%9-2)
{matriza[i][j]='*';;
}
}}
for(int i=0;i<9;i++) {
for(int j=0;j<9;j++) {
	
	cout<<matriza[i][j]<<"  ";}
	cout<<endl;}
return 0;}

