#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
int dato[5];

float promedio;
int suma=0;
for(int i=0;i<=4;i++) {
cout<<"capturar dato"<<i<<endl;
cin>>dato[i];
}
for(int i=0;i<=4;i++)
{suma=suma+dato[i];
promedio=suma/5;
}
cout<<"tu promedio es"<<endl<<promedio;


return 0;
}
