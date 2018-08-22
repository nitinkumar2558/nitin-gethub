//write a c++ program to enter temperature in celsius and convert into fahrenhiet
#include <iostream>
using namespace std;
int main () {
//declare variables
double tempc,tempf;
cout<< "what is temperature in celsius is";
cin>> tempc;
//convert into fahrenhiet
tempf= 1.8*tempc+32;
cout<<" the temperature in fahrenhiet is" << tempf << endl;
return 0;
}
