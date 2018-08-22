//write a c++ program to enter base and height of a triangle and find area 
#include<iostream>
using namespace std;
int main () {
// declare variables
double base,height,area;
cout<<"what are the base and height of triangle?"<<endl;
cin >> base;
cin >> height;
//find area of triangle
area=(1.0/2)*(base)*(height);
cout<< "the area of triangle is" << area << endl;
return 0;
}
