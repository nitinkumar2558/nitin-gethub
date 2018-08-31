//write a c++ program to find maximum between two numbers

#include<iostream>
using namespace std;
//main fuction
int main (){
//declare the variables
double a,b;
cout<< "please enter any two numbers"<<endl;
//input the values
   cin>>a;
   cin>>b;
//condition
if (a<b)
          {cout<<b <<"is greater than "<<a<<endl;
          cout <<b<<"is maximum among two numbers"<<endl;}
//to do otherwise
else     {cout<<b<<"is less than" <<a<<endl;}

return 0;
}
