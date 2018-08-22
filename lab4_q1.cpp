//write a program to enter length in cm and convert it into meter and kilometer 
#include<iostream>
using namespace std;
int main () {
//declare variables lengthcm,lengthm,lengthkm 
double lengthcm,lengthm,lengthkm;
cout <<"what is lengthcm";
cin >> lengthcm;
//convert into meter
lengthm=lengthcm/100;
//convert into lengthkm
lengthkm=lengthm/1000;
cout <<"the length in meter is "<< lengthm << "m and in kilometer is" << lengthkm << "km " << endl;
return 0;
}
