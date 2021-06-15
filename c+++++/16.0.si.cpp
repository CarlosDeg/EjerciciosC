
# include <iostream>
# include <stdio.h>
using namespace std;
int main ()
{
	int cantidad;
	int i, Suma=0;
	cout<<"introducir Numero ";
	cin>>cantidad;
	for(i=1;i<=cantidad;i++) {
		Suma=Suma+1;
		cout<<"La suma es ";
		cout<<Suma;
		cout<<"\n";
	}
	return 0;
}
