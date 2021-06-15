//ejercicio en clase
#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int hack[7][4];
int i,j,veces;
int num;//i para filas j para columnas
for(int i=0;i<7;i++) {
for(int j=0;j<4;j++) {
	hack[i][j];
}	
}
veces=0;
do
{
for(int i=0;i<7;i++)
 {  

for(int j=0;j<4;j++)
{
 cout << endl << "Posicion [ " << i << " ] [ " << j << " ]" << endl;
	cout<<"capturar numero"<<endl;
	cin>>num;
	if(num%3==0)
	{
	}if(j%4==0)
	{
	
	hack[i][j]=num;
	
	j++;}
	
	while(veces<1);}}}

for(int i=0;i<4;i++){
	for(int j=0;j<4;j++)
	{
	
	cout<<hack[i][j]<<endl;
}} return 0;
}
