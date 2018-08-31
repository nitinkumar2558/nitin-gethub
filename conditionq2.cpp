// write a program to find maximum between three numbers
#include <iostream>
using namespace std;
int main (){
//declare the variables
double a,b,c ;
cout <<"plese enter three different numbers"<< endl;
cin>>a;
cin>>b;
cin>>c;
//condition
if ((a>b)&&(a>c))
       cout <<a<<" is maximum among three numbers"<<endl;
else if ((b>a)&&(b>c))
       cout <<b<<"is  maximum among three numbers"<<endl;
else if ((c>a)&&(c>b))
       cout << c<< "is maimum among three numbers"<<endl;
else   {cout <<"plese write three different numbers"<<endl;}
return 0;
}
