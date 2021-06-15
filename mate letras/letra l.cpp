# include <iostream>
# include <stdio.h>
# include <string>
using namespace std;
int main () 
{ char matrizA[9][9];

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
		}
	
	
return 0;
	

	
}

