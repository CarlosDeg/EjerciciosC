#include <iostream>//matriz de 5x4
#include<stdio.h>
using namespace std;
int main(){
int dato[7][4];
int i,j;
int num,veces;
for(int i=0;i<7;i++) {
	
for(int j=0;j<4;j++) {
dato[i][j]=0;
}}

veces=0;
do {
for(int i=0;i<7;i++) {
	for(int j=0;j<4;j++)
	{cout << endl << "Posicion [ " << i << " ] [ " << j << " ]" << endl;
	cout<<"capturar num"<<endl;
	cin>>num;
	if(num%3==0)
	{
		dato[i][j]=num;
		if(j%4==0)
	{
	

	
	veces++;}}
}}}while(veces<1);
 for(i=0;i<7;i++) {
for( j=0;j<4;j++) {
	cout<<dato[i][j]<<"  ";
}
cout<<endl;	
}
return 0;}

