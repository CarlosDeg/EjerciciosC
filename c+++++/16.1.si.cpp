//imprimir numeros de menor a alcalde WHILE

# include <iostream>
# include <stdio.h>
using namespace std;
int main ()
{
	int cantidad;
	int i, Suma=0;
	cout<<"introducir Numero "; cin>>cantidad;
	i=1;
	while(i<=cantidad) {
		Suma=Suma+1;
		cout<<"La suma es ";
		cout<<Suma;
		cout<<"\n";
		i++;
	}
	return 0;
}
