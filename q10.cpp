//write a c++ program to print mirrored right triangle star pattern
#include <iostream>
using namespace std;
/*            

        *
      * * 
    * * *
  * * * *
* * * * *

*/

int main() {
//declare
int i, j, k;
//rows
			for(i = 0;i < 5;i++) {
//print some spaces
				
			for(j = 5;j > i;j--)
			
			{ cout<<(" "); }
			
//print stars
			for(k = 0;k <= i;k++)
				
		            { cout<<("*"); }
			
			cout<<endl; }
				
return 0;
}


