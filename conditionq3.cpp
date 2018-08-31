// write a c++ program to cheak whether a number is negetive, positive and zero
#include <iostream>
using namespace std;
int main () {
//declare variables
double a;
           cout <<"please enter a number"<< endl;
           cin>>a;
//condition
if ((a== 0))
           cout <<a<<"is itself zero"<<endl;
else if ((a< 0))
           cout <<a<< "is negative number" <<endl;
else       cout << a<<"is a positive number"<<endl;
       return 0;
       }  
