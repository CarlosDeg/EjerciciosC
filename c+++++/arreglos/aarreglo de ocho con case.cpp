#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
int dato[8];
float iva=0.16;
int multi=1;
int suma;
int opc;

	for(int i=0;i<=7;i++)
	{cout<<"capturar numeros";
	cin>>dato[i];
	}
	for(int i=0;i<=7;i++)
{suma=suma+dato[i];
multi=suma*iva;

}
	cout<<"total sin iva"<<endl;
	cout<<multi;

	
	
	
	
	
	
	
return 0;	
}
