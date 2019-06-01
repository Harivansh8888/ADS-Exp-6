#include<iostream>
using namespace std;


class Temperature
{

public:

float c,k;

Temperature(int t)    //constructor
{
cout<<"Enter temperature in Kelvin"<<endl;
cin>>k;
calculate();
}

virtual void calculate()
{
c=k-273.15;
cout<<"Temperature in Celsius : "<<c<<endl;
}

};
class Temp: public Temperature
{

public:

float k;
Temp(int a):Temperature(a){}
void calculate()
{
float f;
f= ((c*9)/5)+32;
cout<<"Temperature in fahrenheit : "<<f<<endl;
}
};

