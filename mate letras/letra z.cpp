# include <iostream>
# include <stdio.h>
# include <string>
using namespace std;
int main () 
{ char matrizA[9][9];

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
		}
	
	
return 0;
	

	
}

