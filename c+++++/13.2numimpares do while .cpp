//capturar numero impar y sumar numero par FOR WHILE

# include <iostream>
# include <stdio.h>
using namespace std;
int main ()
{
	int resultado,cantidad;
	int y, Suma=0,Num;
	cout<<"Capturar Total de la cantidad "; cin>>resultado;
	y=1;
	do {
		cout<<"Captrurar cantidad ";
		cout<<y;
		cout<<"\n";
		cin>>cantidad;
		Num=cantidad%2;
		if(Num==0) {
			Suma=Suma+cantidad;
		}
		else{
			cout<<"cantidad Impar ";
			cout<<cantidad;
		}
		y=y+1;
	} while(y<=resultado);
	cout<<"La Suma de la cantidad Par es ";
	cout<<Suma;
	return 0;
}
