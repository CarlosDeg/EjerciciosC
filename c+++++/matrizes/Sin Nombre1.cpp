//ejercicio en clase
#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int hack[7][4];
int i,j;
int num;//i para filas j para columnas
for(int i=0;i<7;i++) {
for(int j=0;j<7;j++) {
	hack[i][j];
}	
}
i=0;
do
{
for(int i=0;i<7;i++) {  	
 cout << endl << "Posicion [ " << i << " ] [ " << j << " ]" << endl;

	cout<<"capturar numero"<<endl;
	cin>>num;
	if(num%3==0)
	{
	}if(j%4==0)
	{
	}
	hack[i][j]=num;
	}
	i++;
	
}	while(j<3);

for(int i=0;i<3;i++){
	for(int j=0;j<3;j++)
	{
	
	cout<<hack[i][j]<<endl;
}}}
