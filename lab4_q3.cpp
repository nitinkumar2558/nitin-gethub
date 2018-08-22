//wrire a c++ program to enter the temperature in fahrenhiet and convert into celsius
#include<iostream>
using namespace std;
int main () {
//declare variables
double tempf,tempc;
cout<<" what is temperature in fahrernhiet";
cin>> tempf;
//convert into celsius
tempc=(tempf-32)*5/9;
cout <<"the temperature in celsius is" << tempc << endl;
return 0;
}
