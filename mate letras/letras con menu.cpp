# include <iostream>
# include <stdio.h>
# include <string>
using namespace std;
int main () 
{ 
int menu,opc;
char matriza[9][9];
char matrizA[9][9];
        cout<< "Elije una opcion: "<<endl;
        cout << "\t1 .-mostrar letra a" << endl;
        cout << "\t2 .- mostrar letra b" << endl;
        cout << "\t3 .-mostrar letra c" << endl;
        cout << "\t4 .- mostrar letra d" << endl;
        cout << "\t5 .-mostrar letra e" << endl;
        cout << "\t6 .- mostrar letra f" << endl;
        cout << "\t7 .-mostrar letra g" << endl;
        cout << "\t8 .- mostrar letra h" << endl;
        cout << "\t9 .-mostrar letra i" << endl;
        cout << "\t10 .- mostrar letra j" << endl;
        cout << "\t11 .-mostrar letra k" << endl;
        cout << "\t12 .- mostrar letra l" << endl;
        cout << "\t13 .-mostrar letra m" << endl;
        cout << "\t14 .- mostrar letra n" << endl;
        cout << "\t15 .-mostrar letra ñ" << endl;
        cout << "\t16 .- mostrar letra o" << endl;
        cout << "\t17 .-mostrar letra p" << endl;
        cout << "\t18 .- mostrar letra q" << endl;
        cout << "\t19 .- mostrar letra r" << endl;
        cout << "\t20 .- mostrar letra s" << endl;
        cout << "\t21 .-mostrar letra t" << endl;
        cout << "\t22 .- mostrar letra u" << endl;
        cout << "\t23 .-mostrar letra v" << endl;
        cout << "\t24 .- mostrar letra w" << endl;
        cout << "\t25 .-mostrar letra x" << endl;
        cout << "\t26 .- mostrar letra y" << endl;
        cout << "\t27 .-mostrar letra z" << endl;
        cout << "\t28 .- opc no valida" << endl;
        cin>>opc;
        switch(opc)
        {case 1:

for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j%8==0||i==4||i==0)
		{
	matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
	break;
			case 2:
			for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j%8==0||i==4||i==0||i==8)
		{
		matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
	break;
		case 3:
			
	
	for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j==0||i==8||i==0)
		{
		matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
		break;
		case 4:
			
for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j==1||j==8||i==8||i==0)
		{
		matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}
	cin>>opc;
	break;
	case 5:
		for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j==0||i==8||i==4||i==0)
		{
		matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}
	cin>>opc;
	break;
	case 6:
	
for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j==0||i==4||i==0)
		{
		matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}
	cin>>opc;
	break;
	case 7:
		for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j==0||i==8||i==4||i==0||j==8&&i>4)
		{
		matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}
	cin>>opc;
	break;
	case 8:
		for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j%8==0||i==4)
		{
	matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
		break;
		case 9:
			for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j==4||i%8==0)
		{
	matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
		break;
		case 10:
			
	for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (i==0||j==4||i==8&&j<4)
		{
	matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}
	cin>>opc;
	break;
	case 11:
		for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j==0||i+j==4||j==i%9-3)
		{
	matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
		break;
		case 12:
			
for(int i=0;i<9;i++) {    
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++) {
		if (j==0||i==8&&j<6)
		{
	matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
		break;
		case 13:
			for(int i=0;i<9;i++) {
for(int j=0;j<9;j++) {

	matriza[i][j]=0;
}	
}
for(int i=0;i<9;i++) {
	
for(int j=0;j<9;j++) 
{

if(j%8==0)
{matriza[i][j]='*';}
if(i+j==8&&i+j==j+i%5){

matriza[i][j]='*';}
if(i==j&&i==j%4){
	matriza[i][j]='*';
}
}}
for(int i=0;i<9;i++) {
for(int j=0;j<9;j++) {
	
	cout<<matriza[i][j]<<"  ";}
	cout<<endl;}cin>>opc;
	break;
	case 14:
		
for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j%8==0||i==j)
		{
	matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
		break;
		case 15:
			for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j==0&&i>1||j==8&&i>1||i==j+1&&i>1||i==0)
		{
	matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
		break;
		case 16:
			for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j%8==0||i==8||i==0)
		{
	matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
		break;
		case 17:
		for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j==0||i==0)
		{
	matrizA[i][j]=42;
		}	if (j==8&&i<4)
		{
	matrizA[i][j]=42;
}
		if (i==3)
		{
	matrizA[i][j]=42;}}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
		break;
		case 18:
			for(int i=0;i<9;i++) {
for(int j=0;j<9;j++) {

	matriza[i][j]=0;
}	
}
for(int i=0;i<9;i++) {
for(int j=0;j<9;j++) 
{

if(j==0&&i<8||i==0&&j<8||j==8&&i<7||i==7&&j<7)
{matriza[i][j]='*';
}

if(j==i)
{
if(i>3) {

matriza[i][j]='*';
}}

}


}
for(int i=0;i<9;i++) {
for(int j=0;j<9;j++) {
	
	cout<<matriza[i][j]<<"  ";}
	cout<<endl;}cin>>opc;
	break;
	case 19:
	for(int i=0;i<9;i++) {
for(int j=0;j<9;j++) {

	matriza[i][j]=0;
}	
}
for(int i=0;i<9;i++) {
for(int j=0;j<9;j++) 
{
if(j==0||i==0)
{matriza[i][j]='*';;}
if(j==8&&i==8/8)//corregir esta linea
{matriza[i][j]='*';;
}
if(i==2)
{matriza[i][j]='*';}


if(j==i%9-2)
{matriza[i][j]='*';;
}
}}
for(int i=0;i<9;i++) {
for(int j=0;j<9;j++) {
	
	cout<<matriza[i][j]<<"  ";}
	cout<<endl;}cin>>opc;
	break;
	case 20:
		for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (i==0||i==4||i==8||j==0&&i<4||j==8&&i>4)
		{
	matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
		break;
		case 21:
		
	for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (i==0||i==4||i==8||j==0&&i<4||j==8&&i>4)
		{
	matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
		break;
		case 22:
			for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j==0||j==8||i==8)
		{
	matrizA[i][j]=42;
		}
	}}
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}
		cout<<"\n";
		}cin>>opc;
		break;
		case 23:
			for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j==8&&i<5||j==0&&i<5||j==i%10-4||i+j==12)
		{
	matrizA[i][j]=42;
		}

	}}
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}
		cout<<"\n";
		}cin>>opc;
		break;
		case 24:
			for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (j==0||j==8||i+j==8&&i>3||i==j&&i>3)
		{
	matrizA[i][j]=42;
		}
	}}
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
		break;
		case 25:
			for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (i==j||i+j==8)
		{
	matrizA[i][j]=42;
		}
	}}
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}
		cout<<"\n";
		}cin>>opc;
		break;
		case 26:
		for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (i+j==8&&i+j==j+i%5||i==j&&i==j%4||j==4&&i>4)
		{
	matrizA[i][j]=42;
		}
	}}
	

	
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
		break;
		case 27:
			for(int i=0;i<9;i++) {    //llenar la matriz de ceros 
	for(int j=0;j<9;j++) {
		matrizA[i][j]=0;
}

}
for(int i=0;i<9;i++) {    // llenar la columna 1 y la columna 4 
	for(int j=0;j<9;j++) {
		if (i%8==0||i+j==8)
		{
	matrizA[i][j]=42;
		}
	}}
	for(int i=0;i<9;i++) {     
	for(int j=0;j<9;j++)
{		cout<<matrizA[i][j]<<"   ";

}

		cout<<"\n";
		}cin>>opc;
		break;
	
}
	return 0;}	
	
	
