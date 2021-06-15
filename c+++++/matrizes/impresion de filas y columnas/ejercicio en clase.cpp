#include <iostream>//diagonal
#include<stdio.h>
#include<string>
using namespace std;
int main(){
char matriza[25][25];
int i,j;
int num;//i para filas j para columnas

for(int i=0;i<25;i++) {
for(int j=0;j<25;j++) {
	matriza[i][j]=0;
}	
}
for(int i=0;i<25;i++) {
	
for(int j=0;j<25;j++) 
{
if(j==0||i==24&&i<15||i==0)
{
matriza[i][j]=42;
}}}
cout<<endl;
for(int i=0;i<25;i++) {
for(int j=0;j<25;j++) {
	cout<<matriza[i][j]<<   "  ";}
	cout<<endl;}
	
return 0;}
