#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int dato[4][4];
int valor2[4][4];
int matriz[4][4];
int i,j;
int num;
int suma=0;
   for(int i=0;i<4;i++) //primer ciclo para llenar la matriz de ceros
   {
	for(int j=0;j<4;j++) 
	{
		dato[i][j]=0;}}
		 for(int i=0;i<4;i++) //primer ciclo para llenar la matriz de ceros
   {
	for(int j=0;j<4;j++) 
	{
		if(j%3==0||i==0)
		{cout<<"capturar numero";
	cin>>dato[i][j];
		}}}
	
			for(int i=0;i<4;i++) 
   {
	for(int j=0;j<4;j++) 
	{
		cout<<dato[i][j]<<"   ";}
		cout<<endl;}
			cout<< "valor2"<<endl;
		for(int i=0;i<4;i++) 
   {
	for(int j=0;j<4;j++) 
	{
		valor2[i][j]=0;}}
		
		for(int i=0;i<4;i++) 
   {
	for(int j=0;j<4;j++) 
	{
		if(j%3==0)
		{
		valor2[i][j]=2;
		}
		if(i==3)
		{valor2[i][j]=2;}
		
		matriz[i][j]=dato[i][j]+valor2[i][j];
		}}
		for(int i=0;i<4;i++) 
   {
	for(int j=0;j<4;j++) 
	{
		cout<<valor2[i][j]<<"   ";}
		cout<<endl;}

		
		cout<<"matriz 3"<<endl;
	
	
		for(int i=0;i<4;i++) //primer ciclo para llenar la matriz de ceros
   {
	for(int j=0;j<4;j++) 
	{
		cout<<matriz[i][j]<<"   ";}
		cout<<endl;}
	}
	
