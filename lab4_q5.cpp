//write a c++ program to enter two angels of a triangle and find third angle
#include <iostream>
using namespace std;
int main() {
//declare variables
double angle1,angle2,angle3;
cout <<"what are the two angles of triangle";
cin>>angle1;
cin>>angle2;
//find third angle
angle3=180-(angle1+angle2/2);
cout<<"the third angle is "<< angle3 << endl;
return 0;
}
