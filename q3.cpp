//write a c++ program for hollow squre star pattern with diagonal
#include <iostream>
using namespace std;
/*  * * * * *
    * *   * *  
    *   *   *   
    * *   * *  
    * * * * *
*/

int main () {
//decleration
int i,k,j;
int n=5;
// number of rows 
  		for (int i=0;i<n;i++) {
//numbers of columns
		for( int j=0;j<n;j++) {
//print space 
		if (i==1&&j==2||i==3&&j==2||i==2&&j==1||i==2&&j==3)

			cout <<" ";
		else  
			cout <<"*";  } 
//go to next line
			cout<< endl; }
return 0;
}



