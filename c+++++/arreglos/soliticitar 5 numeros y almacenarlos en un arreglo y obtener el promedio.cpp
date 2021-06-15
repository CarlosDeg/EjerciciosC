#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int num,i;
int dato [4];
int suma=0, promedio;
for(int i=0;i<5;i++){
cout<<"capturar dato";
cin>>num;
dato[i]=num;
suma=suma+dato[i];
}
promedio=suma/5;
cout<<"el promedio es "<<endl;
cout<<promedio;
return 0;
}
