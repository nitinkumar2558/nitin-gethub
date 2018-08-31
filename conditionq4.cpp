// write a c++ program to cheak whether a number is divisible by 5 and 11 or not

#include <iostream>
using namespace std; 
int main () {
//declare variables
int a;
       cout << "please enter a number"<< endl;
       cin>> a;
//condition
if ((a%5==0) && (a%11!=0))
          cout << a << "is divisible by 5 and  not by 11 "<< endl;
else if ((a%5==0)&&(a%11==0))
          cout << a<< "is divisible by both" <<endl;
else if ((a%5!=0)&&(a%11==0))
          cout <<a<<" divisible by 11 only" << endl;
else      cout << a << "nither divisible by 5 nor by 11" << endl;
return 0 ;
} 

