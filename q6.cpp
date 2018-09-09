//write a c++ program to print mirrored rhombus star pattern 
#include <iostream>
using namespace std;

/*  * * * * *
      * * * * *
	* * * * *
	  * * * * *
	    * * * * *
*/

int main () {
//declare
int i,j;
int n=5;
//number of rows
				for (int   i=0;i<n;i++) {
//print leading spaces
 				for (j=0;j<i;j++)
 	 			{ cout<<" "; }
//number of coloumn
				for (int j=0;j<n;j++) 
 				{ cout<<"*";  }
				cout <<endl; }
					
return 0;
}
