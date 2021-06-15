//   multiplo de 5 y sumar WHILE

# include <iostream>
# include <stdio.h>
using namespace std;
int main ()
{
	int resultado, Numero, Num;
	int i, Suma=0, Multiplicacion=1;
	cout<<"Capturar Total de Numeros ";
	cin>>resultado;
	=1;
	while(i<=resultado) {
		cout<<"introducir cantidad ";
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
	}
	cout<<"La suma de los Multiplos de 5 es: ";
	cout<<Suma;
	cout<<"\n";
	cout<<"La multiplicacion de los No Multiplos de 5 es: ";
	cout<<Multiplicacion;
	return 0;
}
