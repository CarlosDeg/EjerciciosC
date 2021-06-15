#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
int num;
cout<<"que dia quieres ";
cin>>num;
	if( num==1) {
	cout<<"hoy es lunes";}
	else {
		if(num==2) {
		cout<<"hoy es martes";}
		else{
			if(num==3) {cout<<"hoy es miercoles";}
			else{
				if(num==4) {cout<<"hoy es jueves";}
				else{
					if(num==5) {cout<<"hoy es viernes";}
					else{if(num==6) {cout<<"hoy es sabado";}
						else{
						if(num==7) {cout<<"hoy es domingo";}
						}

					}

				}
			}
		}
	}
return 0;
}
