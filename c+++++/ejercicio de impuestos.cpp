#include <iostream> //ejercicio de impuestos
#include <stdio.h>
using namespace std;
int main ()
{	
float resultado=0;
int cantidad=0,restante=0          ;
float descuento=.32,iva=.16;
cout<<" escribe tu cantidad";
cin>>cantidad;
descuento=cantidad*descuento;
restante=cantidad-descuento;
iva=restante*iva;
resultado=restante+iva;
cout<<"tu resultado es ";
cout<<resultado;
return 0;
}
	
	
	

