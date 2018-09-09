//program for hollow squre star pattern
#include <iostream>
using namespace std ;
/*  * * * * *
    *       *
    *       *
    *       *
    * * * * * 
*/



int main () {
int j,i;
int n=5;

//number of rows
	for (int i=0;i<n; i++) {
//numbers of column
	for ( int j=0;j<n;j++) {
//1st and last have 5 stars
 	if (i==0||i==(n-1)||j==0||j==(n-1))
 	cout <<"*";   

//rest have 3 space between stars
	else cout <<" ";  }	
	cout<<endl;}
return 0;
}















 
//go to next line
