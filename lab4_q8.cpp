//write a c++ program to enter marks of five subjects and calculate total ,average and percentage
#include <iostream>
using namespace std;
int main () {
//declare variable
double a,b,c,d,e,total,av,per;
cout <<"write your numbers in five subjects out of hundred";
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>e;
//find total
total=(a+b+c+d+e);
// find average
av=(a+b+c+d+e)/5;
//find percentage
per=(total/500)*100;
cout<< "the total is" <<total<<"average is"<<av<<"percentage is "<<per<< endl;
return 0 ;
}
