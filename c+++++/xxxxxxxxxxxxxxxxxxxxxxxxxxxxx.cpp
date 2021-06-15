#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int menu,opc,multi=1, multi1=1,resultado,res=0;
int num, suma=0;
int dato[7];
int par,total;
int i=0;
float iva=0.16;
cout<< "Elije una opcion: ";
        cout << "ALMACENAR EN UN ARREGLO 8 NUMEROS" << endl;
        cout << "\t1 .- MOSTRAR VALOR TOTAL MAS IVA" << endl;
        cout << "\t2 .- SUMAR TODOS LOS NUMEROS Y CALCULAR EL IVA" << endl;
        cout << "\t3 .- SUMAR A LOS NUMEROS PARES Y Y CALCULAR LA SUMA DE LOS NUMEROS" << endl;
        cout << "\t4 .- SUMAR LOS NUMEROS IMPARES Y OBTENER EL IVA DEL MONTO TOTAL" << endl;
        cout << "\t5 .- Salir" << endl;
        cin>>opc;
        switch(opc)
        {case 1:
for(i=0;i<8;i++)
{
cout<<"ingresa tus numeros"<<i<<endl;
cin>>num;
dato[i]=num;}
for(i=0;i<8;i++)
{
suma=suma+dato[i];
}
cout<<"el resultado mas iva ";
multi1=suma*1.13;

cout<<multi1;
cin>>opc;
return 0;
break;
		case 2:
 for(i=0;i<8;i++)
 {cout<<"capturar numeros"<<i<<endl;
cin>>num;
dato[i]=num;}
for(i=0;i<8;i++)
{
suma=suma+num;
multi=suma*.13;

}
cout<<" tu resultado es "<<endl;
cout<<suma;
cout<<" el iva es de"<<endl;
cout<<multi;

cin>>opc;
break;
case 3:
	for(i=0;i<8;i++)
{cout<<"capturar dato";
cin>>num;
dato [i]=num;
par=num%2;

if(par==0)
{
suma=suma+num;
multi=suma*iva;
resultado=suma+multi;
}
}
cout<<" tu resultado es "<<endl;
cout<<suma;
cout<<" resultado con iva"<<endl;
cout<<resultado;
cin>>opc;
break;
case 4:
for(i=0;i<8;i++)
{cout<<"capturar dato";
cin>>num;
dato [i]=num;}
for(i=0;i<8;i++)
{if(num%2==0) {
}
else{
suma=suma+dato[i];	
}
}
total=suma+(suma*0.16);
cout<<"tu resultado es ";
cout<<total;

cin>>opc;
break;

}
	   return 0;

}
    
    
