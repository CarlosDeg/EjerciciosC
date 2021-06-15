//validar a multiplo de 5 y multiplicar DO WHILE 

# include <iostream>
# include <stdio.h>
using namespace std;
int main ()
{
	int resultado, Numero ;
	int i, Num, Suma=0, Multiplicacion=1;
	cout<<"introducir numeros ";
	cin>>resultado;
	i=1;
	do {
		cout<<"introducir numero Numero ";
		cout<<i;
		cout<<"\n";
		cin>>Numero;
		Num=Numero%2;
		if(Num==0) {
			Suma=Suma+Numero;
		}
		else{
			Multiplicacion=Multiplicacion*Numero;
		}
	i++;	
	} while(i<=resultado);
	cout<<"La suma de los Multiplos de 5 es: ";
	cout<<Suma;
	cout<<"\n";
	cout<<"La multiplicacion de los No Multiplos de 5 es: ";
	cout<<Multiplicacion;
	return 0;
}
