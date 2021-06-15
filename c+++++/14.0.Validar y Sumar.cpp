
# include <iostream>
# include <stdio.h>
using namespace std;
int main ()
{
	int Total, cantidad ;
	int i, Num, Suma=0, Multiplicacion=1;
	cout<<"Capturar cantidad ";
	cin>>Total;
	for(i=1;i<=Total;i++) {
		cout<<"Capturar Numero ";
		cout<<i;
		cout<<"\n";
		cin>>cantidad;
		Num==cantidad%2;
		if(Num==0) {
			Suma=Suma+cantidad;
		}
		else{
			Multiplicacion=Multiplicacion*cantidad;
		}
	}
	cout<<"La suma de los Multiplos de 5 es: ";
	cout<<Suma;
	cout<<"\n";
	cout<<"La multiplicacion de los No Multiplos de 5 es: ";
	cout<<Multiplicacion;
	return 0;
}
