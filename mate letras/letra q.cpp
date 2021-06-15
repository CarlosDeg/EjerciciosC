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

if(j==0&&i<8||i==0&&j<8||j==8&&i<7||i==7&&j<7)
{matriza[i][j]='*';
}

if(j==i)
{
if(i>3) {

matriza[i][j]='*';
}}

}


}
for(int i=0;i<9;i++) {
for(int j=0;j<9;j++) {
	
	cout<<matriza[i][j]<<"  ";}
	cout<<endl;}
return 0;}




