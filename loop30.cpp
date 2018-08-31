//write a c++ program to print amultiplication table of any number
#include <iostream>
using namespace std;
int main () {
//decleration of variables
int n,i;
cout << "please number whom multiplication table you want"<<endl;
//input variables
cin>>n;
//assigning the value
i=1;
   
while (i<=10)
{    cout<< n<<" * "<< i << "=" << n*i << endl;
    i=i+1;
 
}
return 0 ;
}
