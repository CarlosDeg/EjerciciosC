#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int num,i;
int dato [4];
int  promedio;

for(int i=0;i<5;i++){
cout<<"capturar dato"<<endl;
cin>>num;
dato[i]=num;
}
for(i=0;i<5;i++) {
if(dato[i]%5==0)
{cout<<dato[i]<<endl;
}
}      
return 0;
}
