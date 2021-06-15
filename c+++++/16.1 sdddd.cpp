

# include <iostream>
# include <stdio.h>
using namespace std;
int main ()
{
	int cantidad;
	int i, Suma=0;
	cout<<"introducir Numero "; cin>>cantidad;
	i=1;
	do {
		Suma=Suma+1;
		cout<<"La suma es ";
		cout<<Suma;
		cout<<"\n";
	i++;	
	} while(i<=cantidad);
	return 0;
}
