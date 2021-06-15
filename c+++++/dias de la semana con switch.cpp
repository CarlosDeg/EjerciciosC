#include <iostream>
#include <stdio.h>
using namespace std;
int main ()
{
	int num;
	cout<<"un numero entre 1-7 ";
	cin>>num;

	switch(num){
		case 1: cout<<"hoy es lunes"; break;
		case 2: cout<<"hoy es martes"; break;
		case 3: cout<<"hoy es miercoles"; break;
		case 4: cout<<"hoy es jueves"; break;
		case 5: cout<<"hoy es viernes"; break;
		case 6: cout<<"hoy es sabado"; break;
		case 7: cout<<"hoy es domingo"; break;
	
}
}
