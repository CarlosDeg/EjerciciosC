#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int dato[6][6];
int i,j;
int num;
int veces;
for(i=0;i<6;i++) {
for(j=0;j<6;j++)  {
dato[i][j]=0;	
}}
  for(i=0;i<6;i++) {
  for(j=0;j<6;j++)  {
  cout << endl << "Posicion [ " << i << " ] [ " << j << " ]" << endl;	
  if(i==j) {
           
  veces=0;
  do
  {cout<<"capturar numero"<<endl;
  cin>>num;
  if(num%4==0)
   {
  dato[i][j]=num;       
veces++;}}
  while(veces<1);}}}
  
  for(i=0;i<6;i++) {
for(j=0;j<6;j++)  {
cout<<dato[i][j]<<"   ";	
}cout<<endl;}
return 0;

}
  	
  	
  	
  
