#include <iostream>//area de un triangulo ejercicio 1
#include <stdio.h>
using namespace std;
int main()
{
int area;
int b=0,h=0,multi=0;
cout<<" ingresa la base ";
cin>>b;
cout<<"ingresar altura ";
cin>>h;
multi=b*h%2;
area=b*h/2;
cout<<"tu area es igual a ";
cout<<area;
return 0;
}
